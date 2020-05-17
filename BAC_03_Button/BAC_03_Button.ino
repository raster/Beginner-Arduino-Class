/*
 * BAC_03_Button.ino
 *
 * This sketch makes an LED turn on when a button is pressed
 * 
 * https://www.arduino.cc/en/Tutorial/DigitalPins
 * 
 * https://www.arduino.cc/en/Reference/pinMode
 * 
 * https://www.arduino.cc/en/Reference/If
 * 
 * https://www.arduino.cc/en/Reference/Else
 * 
 * https://www.arduino.cc/en/Tutorial/ifStatementConditional
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */
 
int LEDpin = 13;
int ButtonPin = 2;

void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(ButtonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(ButtonPin) == LOW) {
    digitalWrite(LEDpin, LOW);
  }
  else {
    digitalWrite(LEDpin, HIGH);
  }
}

