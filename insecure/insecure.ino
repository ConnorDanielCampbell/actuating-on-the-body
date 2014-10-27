#include <Servo.h>

Servo servo;

const int sleevePin = 10;
const int servoPin = 11;
int sleeve;
int twist = 179;
int untwist = 1;

void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
  pinMode(sleevePin, INPUT); 
}


void loop() {
  sleeve = digitalRead(sleevePin);
  Serial.println(sleeve);
  switch(sleeve) {
    case HIGH:
      servo.write(untwist);
      break;
    case LOW:
      servo.write(twist);
      break;
    default:
      servo.write(untwist);
  }
