int led = 13; //makes it easier to remember which pin is used for what if you declare a variable for the pin

void setup()
{
  pinMode(led, OUTPUT); //label the pin as an output pin
  Serial.begin(9600); //begin the Serial monitor at a baud rate of 9600 bits per second
}

void loop()
{
  int time = millis(); //more flexible to use a variable and millis(), which is
  if (time >= 5000) {  //an integer that indicates time (in milliseconds) since the Arduino booted up
    digitalWrite(led, HIGH); //turns on the 13th digital pin
  }
}
