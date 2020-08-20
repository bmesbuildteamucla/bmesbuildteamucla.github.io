void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int time = millis();
  if (time >= 5000) {
    digitalWrite(13, HIGH);
  }
}
