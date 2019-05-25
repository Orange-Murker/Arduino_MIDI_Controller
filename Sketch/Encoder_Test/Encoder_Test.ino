#include <Encoder.h>


Encoder myEnc(5, 6);

void setup() {
  Serial.begin(9600);
  Serial.println("Encoder Test:");
}

long oldPosition  = -999;

void loop() {
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }
}
