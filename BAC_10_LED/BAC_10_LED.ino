/*
 * BAC_10_LED.ino
 *
 * This sketch makes an LED fade
 *
 * https://www.arduino.cc/en/Reference/AnalogWrite
 * 
 * https://www.arduino.cc/en/Tutorial/PWM
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

// we use a PWM pin (they have a ~ by the number)
int LEDpin = 11;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  analogWrite(LEDpin, 0); // analogWrite values go from 0 to 255
  delay(500);
  analogWrite(LEDpin, 25);
  delay(500);
  analogWrite(LEDpin, 75);
  delay(500);
  analogWrite(LEDpin, 150);
  delay(500);
  analogWrite(LEDpin, 255);
  delay(500);
}

