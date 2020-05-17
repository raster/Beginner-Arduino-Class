/*
 * BAC_02_LED.ino
 *
 * This sketch makes an LED blink on and off (and uses a 220 ohm resistor)
 *
 * https://learn.adafruit.com/breadboards-for-beginners?view=all
 * 
 * https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard
 * 
 * http://ledcalc.com/
 * 
 * http://resisto.rs/
 * 
 * http://resistor.cherryjourney.pt/
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

int LEDpin = 13;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  digitalWrite(LEDpin, HIGH);
  delay(1000);
  digitalWrite(LEDpin, LOW);
  delay(1000);
}

