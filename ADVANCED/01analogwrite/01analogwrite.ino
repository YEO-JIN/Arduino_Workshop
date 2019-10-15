void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3, 255);
  delay(10);
  analogWrite(3, 250);
  delay(10);
  analogWrite(3, 240);
  delay(100);
  analogWrite(3, 230);
  delay(100);
  analogWrite(3, 210);
  delay(100);
  analogWrite(3, 200);
  analogWrite(3, 160);
  delay(500);
  analogWrite(3, 140);
  delay(500);
  analogWrite(3, 120);
  delay(500);
  analogWrite(3, 100);
  delay(100);
  analogWrite(3, 80);
  delay(100);
  analogWrite(3, 60);
  delay(100);
  analogWrite(3, 50);
  delay(100);
  analogWrite(3, 40);
  delay(100);
  analogWrite(3, 30);
  delay(100);
  analogWrite(3, 15);
  delay(100);
  analogWrite(3, 0);
  delay(500);
}
