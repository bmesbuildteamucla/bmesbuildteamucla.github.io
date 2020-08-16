void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
  blink();
  blink();
  blink();
  blink();
  blink();
  blink();
  blink();
  blink();
  blink();
  blink();
}

void blink()
{
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
}
