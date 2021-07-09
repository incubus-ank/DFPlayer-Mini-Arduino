#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

SoftwareSerial mySerial(10, 11);

void setup () {
  Serial.begin (9600);
  mySerial.begin (9600);
  mp3_set_serial (mySerial); 
  mp3_set_volume (20);
}

void loop () {        
  mp3_play (1);
  delay (6000);
  mp3_next ();
  delay (6000);
  mp3_prev ();
  delay (6000);
  mp3_play (3);
  delay (6000);
}
