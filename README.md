# ES50 (Intro to Electrical Engineering) Final Project

The goal of this project is to create a VR experience by using existing affordable devices:
- Nintendo's Wiimote
- Google's Cardboard
- An iPhone

To demonstrate, this repo contains a simple Unity lightsaber game using the Cardboard SDK. The physical setup is the following:
- iPhone inside the Cardboard headset
- Raspberry Pi Zero / Arduino stack attached to front of headset
- 2 IR sensors attached to upper corners of headsets
- 1 Wiimote in hand for interaction
- 1 Wiimote mounted horizontally as VR landmark / reference point

The components function as follows:
- The Wiimotes are synced to the headset's IR sensors (simulating the Wii's sensor bar)
- The Wiimotes communicate relative position & orientation to the RPi over Bluetooth
- Python on the RPi pipes this to the Arduino via GPIO pins
- C on the Arduino pipes this to the phone's audio jack via [FSK].
- Obj-C on the iPhone decodes and pipes this to the Unity game.
- C# in the Unity game reconstructs the relative positions of the headset and wand via this info.

Unfortunately, the software did not work as well as intended, but this was a fantastic Electrical Engineering learning opportunity: communication via embedded devices over a variety of protocols and programming environments.

[FSK]: https://en.wikipedia.org/wiki/Frequency-shift_keying
