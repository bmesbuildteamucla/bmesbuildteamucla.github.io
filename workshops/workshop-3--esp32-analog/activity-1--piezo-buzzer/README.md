# [Workshop 3 - ESP32 Analog](https://bmesbuildteamucla.github.io/workshops/workshop-3--esp32-analog)

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
* Revelant components
  - Piezo Buzzer: 
  ![buzzer circuit](../static/buzzer.png)
  - Photoresistor: Can be wired in both directions, since it isn't a diode.
  ![photoresistor](../static/photoresistor.png)
  - Potentiometer: Can also be wired in both directions either place power at the left or right most pin.
  ![potentiometerpng](../static/potentiometer.png)

### Circuit:
![Circuit](w3a1.png)

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
