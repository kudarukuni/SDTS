#include<SoftwareSerial.h>

SoftwareSerial mySerial(1, 3); //TX, RX

void setup(){
  Serial.begin(115200);
  mySerial.begin(115200);
}

void loop(){
  String msg = mySerial.readStringUntil('\r');
  Serial.println(msg);
}
