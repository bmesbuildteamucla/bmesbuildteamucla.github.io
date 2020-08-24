# [Workshop 2](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino)
## Activity 2 - LED Flashing

### Task:
Have the yellow LED turned on, then every 5 seconds turn off the yellow LED and have the red LED flash 10 times.

### Circuit:
![Circuit](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/blob/master/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%202%20-%20LED%20Flashing/Circuit.PNG)

### Code:
```C++
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
```
