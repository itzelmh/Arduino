/*
Adafruit Arduino - Lesson 4. 8 LEDs and a Shift Register - Brightness
*/

int latchPin = 5;
int clockPin = 6;
int dataPin = 4;
int outputEnablePin = 3;

byte leds = 0;

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  pinMode(outputEnablePin, OUTPUT); 
}

void loop() 
{
  setBrightness(20);
  leds = 0;
  updateShiftRegister();
  delay(300);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(300);
  }
  for (byte b = 20; b > 0; b--)
  {
    setBrightness(b);
    delay(100);
  }
}

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setBrightness(byte brightness) // 0 to 255
{
  analogWrite(outputEnablePin, 255-brightness);
}

