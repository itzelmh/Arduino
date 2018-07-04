/*
Adafruit Arduino - Lesson 3. RGB LED
*/

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  setColor(10, 0, 0);  // red
  delay(1000);
  setColor(0, 10, 0);  // green
  delay(1000);
  setColor(0, 0, 5);  // blue
  delay(1000);
  setColor(10, 10, 0);  // yellow
  delay(1000);  
  setColor(5, 0, 5);  // purple
  delay(1000);
  setColor(0, 10, 10);  // aqua
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
