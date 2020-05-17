/*
 * BAC_12_Servo.ino
 *
 * This sketch makes a servo move
 *
 * https://www.arduino.cc/en/reference/servo
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */


#include <Servo.h>

Servo myServo;  // create servo object to control a servo

int stepValue = 10;
int delayValue = 300;

void setup() {
  myServo.attach(9);
  
  myServo.write(0);
  delay(1000);
  myServo.write(180);
  delay(1000);
  myServo.write(0);
  delay(1000);
  
}

void loop() {
  
  for (int angle = 0; angle <= 180; angle = angle + stepValue) {
    myServo.write(angle);
    delay(delayValue);
  }

  delay(500);

  for (int angle = 180; angle >= 0; angle = angle - stepValue) {
    myServo.write(angle);
    delay(delayValue);
  }
  
  delay(500);

}
