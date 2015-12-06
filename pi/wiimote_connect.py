import sys, os
import time
import threading
import select
import struct

import SocketServer

import cwiid
import usbmux

# ================ WIIMOTE VARIABLES

wiimotes = []

# ================ iOS VARIABLES

is_ios_connected = False
ios_socket = None

# ================ END GLOBALS

# ================ CLASSES

class PeerTalkThread(threading.Thread):
	def __init__(self,*args):
		self._psock = args[0]
		self._running = True
		threading.Thread.__init__(self)

	def run(self):
		framestructure = struct.Struct("! I I I I")
		while self._running:
			try:
				msg = self._psock.recv(16)
				if len(msg) > 0:
					frame = framestructure.unpack(msg)
					size = frame[3]
					msgdata = self._psock.recv(size)
					print "Got from iOS: %s" % msgdata
			except:
				pass

	def stop(self):

		global is_ios_connected
		global ios_socket
		
		is_ios_connected = False
		ios_socket = None
		self._running = False

# ================ FUNCTIONS

def main():

	# Sends cwiid errors to garbage
	sys.stderr = os.fdopen(os.dup(2), "w")
	os.dup2(os.open("/dev/null", os.O_WRONLY), 2)

	# Start independent iOS connection thread
	ios_conn_thr = threading.Thread(target=ios_connect_loop)
	ios_conn_thr.daemon = True
	ios_conn_thr.start()

	# Start independent wiimote pairing thread
	pair_thr = threading.Thread(target=wiimote_pair_loop)
	pair_thr.daemon = True
	pair_thr.start()

	print "Press 1+2 on your Wiimote now"

	# start input reading loop
	wiimote_read_input_loop()

# Polls connected wiimotes @ 60 Hz
def wiimote_read_input_loop():

	global wiimotes

	while True:

		if True:#is_ios_connected and ios_socket is not None:
		
			states = []

			# Go through all wiimotes
			for i in range(len(wiimotes)):

				wm = wiimotes[i]

				# Print messages for button state

				state_dict = {}

				ir_pos = wm.state['ir_src']			
				
				#print ir_pos
				nir = [x for x in ir_pos if x is not None]				
				print len(nir)

				if ir_pos[0] is None:
					state_dict["IR0"] = -1
				else:
					state_dict["IR0"] = str(ir_pos[0]['pos'][0]) + "|" + str(ir_pos[0]['pos'][1])

				if ir_pos[1] is None:
					state_dict["IR1"] = -1
				else:
					state_dict["IR1"] = str(ir_pos[1]['pos'][0]) + "|" + str(ir_pos[1]['pos'][1])

				if ir_pos[2] is None:
					state_dict["IR2"] = -1
				else:
					state_dict["IR2"] = str(ir_pos[2]['pos'][0]) + "|" + str(ir_pos[2]['pos'][1])

				if ir_pos[3] is None:
					state_dict["IR3"] = -1
				else:
					state_dict["IR3"] = str(ir_pos[3]['pos'][0]) + "|" + str(ir_pos[3]['pos'][1])				

				state_dict["A"] = int(bool(wm.state['buttons'] & cwiid.BTN_A))
				if state_dict["A"]:
					print "A %d" % (i + 1)			

				state_dict["B"] = int(bool(wm.state['buttons'] & cwiid.BTN_B))
				if state_dict["B"]:
					print "B %d" % (i + 1)

				state_dict["H"] = int(bool(wm.state['buttons'] & cwiid.BTN_HOME))
				if state_dict["H"]:
					pass#print "Home %d" % (i + 1)			

				state_dict["U"] =  int(bool(wm.state['buttons'] & cwiid.BTN_UP))
				if state_dict["U"]:
					pass#print "Up %d" % (i + 1)			

				state_dict["L"] = int(bool(wm.state['buttons'] & cwiid.BTN_LEFT))
				if state_dict["L"]:
					pass#print "Left %d" % (i + 1)			

				state_dict["R"] = int(bool(wm.state['buttons'] & cwiid.BTN_RIGHT))
				if state_dict["R"]:
					pass#print "Right %d" % (i + 1)			
				
				state_dict["D"] = int(bool(wm.state['buttons'] & cwiid.BTN_DOWN))
				if state_dict["D"]:
					pass#print "Down %d" % (i + 1)			

		
				states.append(state_dict)
				
			if is_ios_connected and ios_socket is not None:
					
				payload = create_payload(states)
				payload += "~"
				payload += str(long(round(time.time() * 1000)))
				payload = payload.strip()
				if len(payload) > 0:
					send_to_ios(payload, ios_socket)

			# 60 Hz
			time.sleep(0.033)

		else:
			# naptime
			time.sleep(1.0)

# Thread checking for new wiimote connections
def wiimote_pair_loop():

	global wiimotes

	while True:

		wm = None

		try:
			wm = cwiid.Wiimote()
		except:	
			#print "Pair error %s" % sys.exc_info()[0]	
			pass
		
		# Found a Wiimote! :D
		if wm is not None:			

			# Just report buttons and infrared cam
			wm.rpt_mode = cwiid.RPT_BTN | cwiid.RPT_IR
			
			# Assign player number, set LED

			player_no = min(len(wiimotes) + 1, 4)
			led_code = pow(2, player_no - 1)
			
			wm.led = led_code
			
			# Rumble to indicate
			wm.rumble = 1
			time.sleep(0.2)
			wm.rumble = 0
		
			wiimotes.append(wm)
	
			print "Paired Wiimote no. %d" % player_no

		time.sleep(0.4)

# Thread checking for new ios connections
def ios_connect_loop():

	global is_ios_connected
	global ios_socket

	mux = None

	print "Searching for iOS..."

	# try connect 
	while True:

		if mux is None:
			
			try:
				mux = usbmux.USBMux()
				print "Created MUX connection"
			except:
				pass
		elif mux is not None and len(mux.devices) == 0:

			mux.process(1.0) # timeout for 1 second
		
		elif mux is not None and len(mux.devices) > 0 and not is_ios_connected:

			try:
				# make connection
				device = mux.devices[0]
				ios_socket = mux.connect(device, 2345) # 2345 is port number
				ios_socket.setblocking(0)
				ios_socket.settimeout(2)

				is_ios_connected = True
			except:
				pass

			if is_ios_connected:
				
				print "connecting to device %s" % str(device)
				# kick off comms thread
				pt_thr = PeerTalkThread(ios_socket)
				pt_thr.daemon = True
				pt_thr.start()

		else:
			# sleep to not spin
			time.sleep(1.0)

# Creates payload to send from states			
def create_payload(states):
	
	message = ""

	for i in range(len(states)):
	
		wm_state = states[i]	
		message += ("WM" + str(i) + "*")		

		keys = wm_state.keys()
		
		for j in range(len(keys)):
		
			message += str(keys[j]) + "=" + str(wm_state[keys[j]])
			
			if j < len(keys) - 1:
				message += "&"
		
		if i < len(states) - 1:
			message += ";"
	#return "Hello familia :)"
	#print message
	return message

# Send string to iOS
def send_to_ios(payload, ios_socket):
	
	print "Sending: %s" % payload

	r8 = payload.encode('utf-8')
	headervalues = (1,101,0,len(r8)+4)
	framestructure = struct.Struct("! I I I I")
	packed_data = framestructure.pack(*headervalues)
	ios_socket.send(packed_data)
	messagevalues = (len(r8),r8)
	fmtstring = "! I {0}s".format(len(r8))
	sm = struct.Struct(fmtstring)
	packed_message = sm.pack(*messagevalues)
	ios_socket.send(packed_message)


if __name__ == "__main__":
	
	main()
