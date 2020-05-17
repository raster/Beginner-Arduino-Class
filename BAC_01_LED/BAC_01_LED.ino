/*
 * BAC_01_LED.ino
 *
 * This sketch makes an LED blink on and off
 *
 * https://www.arduino.cc/en/Reference/Int
 * 
 * https://www.arduino.cc/en/Tutorial/Variables 
 * 
 * https://www.arduino.cc/en/Reference/VariableDeclaration
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

// use a variable to store a number
int LEDpin = 13;

void setup() {
  // initialize the digital pin as an output
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  digitalWrite(LEDpin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(50);                // wait for a second
  digitalWrite(LEDpin, LOW);  // turn the LED off by making the voltage LOW
  delay(50);                // wait for a second
}



