/*
 * BAC_15_MOSFET.ino
 *
 * This sketch makes a 12 volt device run via PWM
 *
 * https://www.sparkfun.com/products/12959
 * 
 * https://www.arduino.cc/en/Tutorial/PWM
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

// we use a PWM pin (they have a ~ by the number)
int PWRpin = 3;

void setup() {
  pinMode(PWRpin, OUTPUT);
}

void loop() {
  analogWrite(PWRpin, 0); // analogWrite values go from 0 to 255
  delay(2000);
  analogWrite(PWRpin, 25);
  delay(2000);
  analogWrite(PWRpin, 75);
  delay(2000);
  analogWrite(PWRpin, 150);
  delay(2000);
  analogWrite(PWRpin, 255);
  delay(2000);
}


