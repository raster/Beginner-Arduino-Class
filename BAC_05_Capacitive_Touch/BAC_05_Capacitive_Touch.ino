/*
 * BAC_05_Capacitive_Touch.ino
 *
 * This sketch makes an LED turn on when a capacitive touch sensor is triggered
 * 
 * https://www.adafruit.com/product/1374
 * 
 * https://www.sparkfun.com/products/12041
 *
 * http://www.ebay.com/itm/201414934786
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

int LEDpin = 13;
int CapTouchPin = 2;

void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(CapTouchPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(CapTouchPin) == HIGH) {
    digitalWrite(LEDpin, HIGH);
  }
  else {
    digitalWrite(LEDpin, LOW);
  }
}

