import sys, os
import time
import threading
import serial

import cwiid

# ================ WIIMOTE VARIABLES

wiimotes = []
states = []

# ================ ARDUINO VARIABLES

arduino_serial = None
is_arduino_connected = False
arduino_write_queue = []

arduino_serial_name = "/dev/ttyACM0"
baud_rate = 115200

handshake_send_msg = "RBPI_HANDSHAKE"
handshake_receive_msg = "ARD_HANDSHAKE"
confirmation_msg = "ARD_CONFIRM"

message_read_header = "ARDU:"
message_write_header = "RBPI:"
message_footer = ":END"

message_code_error = "0:"
message_code_success = "1:"

# ================ END GLOBALS


def main():

	# Sends cwiid errors to garbage
	sys.stderr = os.fdopen(os.dup(2), "w")
	os.dup2(os.open("/dev/null", os.O_WRONLY), 2)

	# Start independent pairing thread
	pair_thr = threading.Thread(target=pair_loop)
	pair_thr.daemon = True
	pair_thr.start()

	# Start independent serial comm thread
	serial_read_thr = threading.Thread(target=serial_read_loop)
	serial_read_thr.daemon = True
	serial_read_thr.start()

	# Start write thread
	serial_write_thr = threading.Thread(target=serial_write_loop)
	serial_write_thr.daemon = True
	serial_write_thr.start()

	print "Press 1+2 on your Wiimote now"

	# start input reading loop
	read_input_loop()

# Polls connected wiimotes @ 60 Hz
def read_input_loop():

	global wiimotes
	global states

	while True:

		new_states = []

		# Go through all wiimotes
		for i in range(len(wiimotes)):

			wm = wiimotes[i]

			# Print messages for button state

			state_dict = {}

			ir_pos = wm.state['ir_src']			
			
			if ir_pos[0] is None:
				state_dict["IR0"] = -1
			else:
				state_dict["IR0"] = str(ir_pos[0][0]) + "|" + str(ir_pos[0][1])

			if ir_pos[1] is None:
				state_dict["IR1"] = -1
			else:
				state_dict["IR1"] = str(ir_pos[1][0]) + "|" + str(ir_pos[1][1])

			if ir_pos[2] is None:
				state_dict["IR2"] = -1
			else:
				state_dict["IR2"] = str(ir_pos[2][0]) + "|" + str(ir_pos[2][1])

			if ir_pos[3] is None:
				state_dict["IR3"] = -1
			else:
				state_dict["IR3"] = str(ir_pos[3][0]) + "|" + str(ir_pos[3][1])
			
			

			state_dict["A"] = int(bool(wm.state['buttons'] & cwiid.BTN_A))
			if state_dict["A"]:
				pass#print "A %d" % (i + 1)			

			state_dict["B"] = int(bool(wm.state['buttons'] & cwiid.BTN_B))
			if state_dict["B"]:
				pass#print "B %d" % (i + 1)

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

	
			new_states.append(state_dict)

		states = new_states		
		send_states()

		# 60 Hz
		time.sleep(0.016)

# Thread checking for new connections
def pair_loop():

	global wiimotes

	while True:

		wm = None

		try:
			wm = cwiid.Wiimote()
		except:	
			print "Pair error %s" % sys.exc_info()[0]	
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

def serial_write_loop():	

	global arduino_serial
	global is_arduino_connected
	global arduino_write_queue

	while True:

		# Wait until read loop makes connection
		if arduino_serial is None or not is_arduino_connected:

			time.sleep(1)
		else:
		# Proceed to write from write queue @ 60HZ

			#message_to_write = "HELLO ITS NICK"
			#arduino_write_queue.append(message_to_write)

			
			# Take copy, pop original queue
			write_queue = list(arduino_write_queue)
			arduino_write_queue = arduino_write_queue[len(write_queue):]

			for write_message in write_queue:

				if len(write_message.strip()) > 0:

					entire_message = message_write_header + message_code_success + write_message + message_footer
					arduino_serial.write(entire_message)

					#print "Sent: %s" % write_message

			# 60 Hz
			time.sleep(.016)
		

# Thread reading loop
def serial_read_loop():

	global arduino_serial
	global is_arduino_connected
	global arduino_write_queue

	while True:
		
		# Open Arduino serial connection
		
		if arduino_serial is None:
			print "Scanning serial..."

			try:
				arduino_serial = serial.Serial(arduino_serial_name, baud_rate)
				arduino_serial.flushInput()
				print "Started serial connection..."

			except:
				pass

			time.sleep(1)
			continue

		read_line = arduino_serial.readline()
		read_line = read_line.strip()
		
		if is_arduino_connected:

			# Check header and footer		
			if read_line.startswith(message_read_header) and read_line.endswith(message_footer):

				stripped_line = read_line[len(message_read_header):]
				stripped_line = stripped_line[:-len(message_footer)]

				# Check message code
				successful_msg = False
				message_data = ""

				if stripped_line.startswith(message_code_success):
					message_data = stripped_line[len(message_code_success):]
					successful_msg = True

				elif stripped_line.startswith(message_code_error):
					message_data = stripped_line[len(message_code_success):]
					successful_msg = False

				# Do success message stuff
				if successful_msg:

					print "Got message: <%s>" % message_data

				else:

					print "Got error: <%s>" % read_line

			else:

				print "Got unknown message: <%s>" % read_line
			
		else:

			# check for handshake
			if read_line.startswith(handshake_receive_msg):
				print "Received handshake: <%s>" % read_line
				# send back handshake
				arduino_serial.write(handshake_send_msg)
				arduino_serial.write("\n")

			# check for confirmation
			if read_line.startswith(confirmation_msg):

				print "Received confirmation: <%s>" % read_line
				is_arduino_connected = True

			print "Got unknown message: <%s>" % read_line		

		# 60 Hz
		time.sleep(1)
		
# adds states to queue to write				
def send_states():
	
	global states
	global arduino_write_queue

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

	arduino_write_queue.append(message)
			
		

if __name__ == "__main__":
	
	main()
