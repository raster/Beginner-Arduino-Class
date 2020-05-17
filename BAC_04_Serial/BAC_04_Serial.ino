/*
 * BAC_04_Serial.ino
 *
 * This sketch makes an LED turn on when a button is pressed and also sends serial data
 * 
 * https://www.arduino.cc/en/Tutorial/InputPullupSerial
 * 
 * https://learn.adafruit.com/adafruit-arduino-lesson-5-the-serial-monitor?view=all
 * 
 * Pete Prodoehl <pete@2xlnetworks.com>
 */

int LEDpin = 13;
int ButtonPin = 2;
int ButtonValue;

void setup() {
  pinMode(LEDpin, OUTPUT);
  pinMode(ButtonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  ButtonValue = digitalRead(ButtonPin);
  
  if (ButtonValue == LOW) {
    digitalWrite(LEDpin, HIGH);
    Serial.println("The LED is on!");
  }
  else {
    digitalWrite(LEDpin, LOW);
    Serial.println("The LED is not on...");
  }
  
}


