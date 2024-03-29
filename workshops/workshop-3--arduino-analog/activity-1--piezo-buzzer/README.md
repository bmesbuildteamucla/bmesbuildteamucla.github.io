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
* Revelant components
  - Piezo Buzzer: 
  ![buzzer circuit](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/f0c98d85-631b-4d5e-b60b-ee61a7043293)
  - Photoresistor: Can be wired in both directions, since it isn't a diode.
  ![photoresistor](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/66b2abc2-4248-45a1-8dcf-c5ec865a44b0)
  - Potentiometer: Can also be wired in both directions either place power at the left or right most pin.
  ![potentiometerpng](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/assets/134753006/5065d173-fe3b-4ade-91c0-bdea99501fa8)

### Circuit:
![Circuit](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/blob/81682143ed45909f4c51086dd34fbe8f0fda102c/workshops/workshop-3--arduino-analog/activity-1--piezo-buzzer/Workshop%203%20Activity%201.png)

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
