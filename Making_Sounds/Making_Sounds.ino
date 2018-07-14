/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeitech.com
 */
int speakerPin = 11;
int photocellPin = A0;
void setup()
{
}
 void loop()
{
  int reading = analogRead(photocellPin);
  int pitch = 200 + reading / 20;
  tone(speakerPin, pitch);
}

