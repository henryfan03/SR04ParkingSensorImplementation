#include <SR04.h>
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

#include "pitches.h"
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 300;

void setup() {
   Serial.begin(9600);
   delay(1000);
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);

   if (a < 10) {
    tone(8, melody[4], duration);
    delay(300);
   }
   
   else if (a < 25) {
    tone(8, melody[2], duration);
    delay(400);
   }

   else if (a < 50) {
    tone(8, melody[0], duration);
    delay(500);
   }
  
   delay(100);
}
