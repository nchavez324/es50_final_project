import sys, os
import cwiid
import time
import threading

# List of Wiimotes
wiimotes = []

def main():

	# Sends cwiid errors to garbage
	sys.stderr = os.fdopen(os.dup(2), "w")
	os.dup2(os.open("/dev/null", os.O_WRONLY), 2)

	# Start independent pairing thread
	pair_thr = threading.Thread(target=pair_loop)
	pair_thr.daemon = True
	pair_thr.start()

	print "Press 1+2 on your Wiimote now"

	# start input reading loop
	read_input_loop()

# Polls connected wiimotes @ 60 Hz
def read_input_loop():

	while True:

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
							

if __name__ == "__main__":
	
	main()
