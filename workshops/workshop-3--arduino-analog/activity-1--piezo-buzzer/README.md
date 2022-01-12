# [Workshop 3 - Arduino Analog](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog)

## Activity 1 - Piezo Buzzer

### Task:
* Make a theremin (musical instrument) using a photoresistor and piezo buzzer
  - Alternatively, use a potentiometer to control pitch
* Play a scale
* Relevant functions
  ```c++
  tone(pin, frequency);
  tone(pin, frequency, duration);
  noTone(pin);
  ```

### Circuit:

### Code:
```c++
int piezo = 3; // Pin for piezo buzzer
int photo = 5; // Pin for photoresistor

void setup()
{
  pinMode(piezo,OUTPUT);
}

void loop()
{
  int value = analogRead(photo); // Analog input
  int note = map(value,0,1023,400,1000); // Map to output values
  tone(piezo,note); // Play tone on buzzer
}
```
