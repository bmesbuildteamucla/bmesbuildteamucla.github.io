int yellow = 2; //again, declare int variables for pin numbers for easy identification
int red = 3;

void setup()
{
  pinMode(yellow, OUTPUT); //classify pins as outputs
  pinMode(red, OUTPUT);
  digitalWrite(red, LOW); //initially, the red LED is off
}

void blink() //for practice, you can declare a function that blinks the red LED
{
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
} //make sure to declare the function before it is used

void loop()
{
  digitalWrite(yellow, HIGH); //initially, yellow LED is on
  delay(5000); //wait 5 seconds
  digitalWrite(yellow, LOW); //turn off the yellow LED
  
  for (int i = 0; i < 10; i++) { //use a for loop to run blink() 10 times
    blink();
  }
  
}
