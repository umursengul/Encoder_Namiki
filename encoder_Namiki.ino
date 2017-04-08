/* Encoder */

#include <Encoder.h>

Encoder myEnc(2,3); // Encoder pins

void setup()
{
  Serial.begin(9600);
  Serial.println("Encoder Test:");
}

long oldPosition  = -999;

void loop()
{
  long newPosition = myEnc.read();
  if (newPosition != oldPosition)
  {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }
}
