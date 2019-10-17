#include <Wire.h>
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  val = map(val, 0, 1023, 0, 255);
  Wire.beginTransmission(8);
  Wire.write(val);
  Wire.endTransmission();
  Serial.print(val);

}
