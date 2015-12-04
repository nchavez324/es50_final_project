import sys, os
import time
import threading
import serial

import cwiid

wiimotes = []

arduino_serial = None
arduino_serial_name = "/dev/ttyACM0"
baud_rate = 9600

handshake_send_msg = "RBPI_HANDSHAKE"
handshake_receive_msg = "ARD_HANDSHAKE"
confirmation_msg = "ARD_CONFIRM"

message_read_header = "ARDU:"
message_write_header = "RBPI:"
message_footer = ":END"

message_code_error = "0:"
message_code_success = "1:"

def main():

	# Open Arduino serial connection
	arduino_serial = serial.Serial(arduino_serial_name, baud_rate)

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

	print "Press 1+2 on your Wiimote now"

	# start input reading loop
	read_input_loop()

# Polls connected wiimotes @ 60 Hz
def read_input_loop():

	while True:

		states = []

		# Go through all wiimotes
		for i in range(len(wiimotes)):

			wm = wiimotes[i]

			# Print messages for button state

			ir_pos = wm.state['ir_src']			

			if bool(wm.state['buttons'] & cwiid.BTN_A):
				print "A %d" % (i + 1)			
			if bool(wm.state['buttons'] & cwiid.BTN_B):
				print "B %d" % (i + 1)			
			if bool(wm.state['buttons'] & cwiid.BTN_HOME):
				print "Home %d" % (i + 1)			

			if bool(wm.state['buttons'] & cwiid.BTN_UP):
				print "Up %d" % (i + 1)			
			if bool(wm.state['buttons'] & cwiid.BTN_LEFT):
				print "Left %d" % (i + 1)			
			if bool(wm.state['buttons'] & cwiid.BTN_RIGHT):
				print "Right %d" % (i + 1)			
			if bool(wm.state['buttons'] & cwiid.BTN_DOWN):
				print "Down %d" % (i + 1)			

			states.append(wm.state)

		send_states(states)

		# 60 Hz
		time.sleep(0.016)

# Thread checking for new connections
def pair_loop():

	while True:

		wm = None

		try:
			wm = cwiid.Wiimote()
		except:		
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

# Thread reading loop
def serial_read_loop():

	is_arduino_connected = False

	while True:

		read_line = arduino_serial.readline()
		read_line = read_line.strip()
		
		if is_arduino_connected:

			# Check header and footer		
			if read_line.startswith(message_read_header) and
				readline.endswith(message_footer):

				stripped_line = read_line[len(message_read_header):]
				stripped_line = stripped_line[:-len(message_footer)]

				# Check message code
				successful_msg = False
				message_data = ""

				if stripped_line.startswith(message_code_success):
					message_data = stripped_line[len(message_code_success)]
					successful_msg = True

				elif stripped_line.startswith(message_code_error):
					message_data = stripped_line[len(message_code_success)]
					successful_msg = False

				# Do success message stuff
				if successful_msg:

					print "Got message: <%s>" % message_data

				else:

					print "Got error: <%s>" % message_data

			else:

				print "Got unknown message: <%s>" % read_line

		else:

			# check for handshake
			if read_line.startswith(handshake_receive_msg):
				print "Received handshake: <%s>" % read_line
				# send back handshake
				arduino_serial.write(handshake_send_msg.encode(ascii))
				arduino_serial.write("\n".encode(ascii))

			# check for confirmation
			if read_line.startswith(confirmation_msg):

				print "Received confirmation: <%s>" % read_line
				is_arduino_connected = True

			print "Got unknown message: <%s>" % read_line

		# 60 Hz
		time.sleep(0.016)
						
def send_states(states):



if __name__ == "__main__":
	
	main()
