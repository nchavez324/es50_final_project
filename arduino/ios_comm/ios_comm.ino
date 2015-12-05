#include <SPP.h>

USB usb;
BTD btd(&usb);
SPP serialBT(&btd, "Nick's Arduino", "1234");

bool firstMessage = true;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  if (usb.Init() == -1) {
    Serial.println("OSC did not start");
    while(1);
  }

  Serial.println("SPP Bluetooth library started");
}

void loop() {
  // put your main code here, to run repeatedly:

  usb.Task(); //or serialBT.send()

  if (serialBT.connected) {

    if (firstMessage) {
      firstMessage = false;
      serialBT.println("Eyo this be Arduino");
    }

    if (Serial.available())
      serialBT.write(Serial.read());
      
    if (serialBT.available())
      Serial.write(serialBT.read());
  } else {
    firstMessage = true;
  }
}
