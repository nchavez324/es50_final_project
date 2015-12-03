/*
  //==== AUX TRANSMISSION SECTION

  #include "SoftModem.h"
  #include <ctype.h>

  SoftModem kModem;

  int kDigitalSignal = LOW;

  int kReadPin = 13;
  int kLedPin = 7;

  void setup() {
  // put your setup code here, to run once:

  pinMode(kLedPin, OUTPUT);      // sets the digital pin 13 as output
  pinMode(kReadPin, INPUT);      // sets the digital pin 7 as input

  Serial.begin(9600);

  kModem.begin();
  }

  void loop() {
  // put your main code here, to run repeatedly:

  kDigitalSignal = digitalRead(kReadPin);   // read the input pin

  digitalWrite(kLedPin, kDigitalSignal);


  if (kDigitalSignal == HIGH) {

    kModem.write(255);
  }
  }
*/

//================= WIIMOTE SECTION

#include <Wii.h>
#include <usbhub.h>

// Satisfy the IDE, which needs to see the include statment in the ino too.
#ifdef dobogusinclude
#include <spi4teensy3.h>
#include <SPI.h>
#endif

USB Usb;
//USBHub Hub1(&Usb); // Some dongles have a hub inside

BTD Btd(&Usb); // You have to create the Bluetooth Dongle instance like so
/* You can create the instance of the class in two ways */
WII Wii(&Btd, PAIR);
// This will start an inquiry and then pair with your Wiimote - you only have to do this once
//WII Wii(&Btd); // After that you can simply create the instance like so and then press any button on the Wiimote

void setup() {

  Serial.begin(9600);


#if !defined(__MIPSEL__)
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
  if (Usb.Init() == -1) {
    Serial.println("OSC did not start");
    while (1); //halt
  }

  Serial.println("Wiimote Bluetooth Library Started");
}

void loop() {
  Usb.Task();

  if (Wii.wiimoteConnected) {

     if (Wii.getButtonClick(A)) {
        Serial.println("A");
     }
  }
}

