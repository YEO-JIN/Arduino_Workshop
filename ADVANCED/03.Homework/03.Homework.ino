int cds = A0;
int led = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int cdsValue = analogRead(cds);
  Serial.print("cds=");
  Serial.println(cdsValue);
  analogWrite(led, cdsValue);

}
