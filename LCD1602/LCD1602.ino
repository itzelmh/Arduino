/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeitech.com
 */
// initialize the library with the numbers of the interface pins
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()                                                                                     
{
// set up the LCD's number of columns and rows:
  lcd.begin(16,2); //size of display
// Print a message to the LCD.
  lcd.print("    Hello ");
  lcd.setCursor(0,1);  //Display position, second line (column, row)
  lcd.print("    world!");
}
void loop()
{
// Turn off the display:
  lcd.noDisplay();
  delay(500);
  // Turn on the display:
  lcd.display();
  delay(2000);
 }

