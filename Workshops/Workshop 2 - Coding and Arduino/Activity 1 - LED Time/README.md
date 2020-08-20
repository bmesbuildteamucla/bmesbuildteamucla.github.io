# Activity 1 - LED Time

### Task:
Turn the LED on after 5 seconds using a conditional statement. (Don’t use delay().)

### Circuit:
![Circuit](https://github.com/bmesbuildteamucla/Workshop-2/blob/master/Activity%201%20-%20LED%20Time/Activity%201.PNG)

### Code:
```C++
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
```
