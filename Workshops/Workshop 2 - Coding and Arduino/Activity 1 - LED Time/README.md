# [Workshop 2](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino)

## Activity 1 - LED Time

### Task:
Turn the LED on after 5 seconds using a conditional statement. (Don’t use delay().)

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%201%20-%20LED%20Time/Circuit_1.JPEG)

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
