# [Workshop 3 - Arduino Analog](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog)

## Activity 3 - Thermometer

### Task:
* Use a thermistor to measure temperature
  - Pinch and release the thermistor to see temperature changes
  - Graph using Serial Plotter
  - Alternatively, use photoresistor to measure brightness

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-3--light-level-sensor/circuit.png)

Thermistor can be substituted with photoresistor

### Code:
```c++
void setup()
{
  Serial.begin(9600);   // initiate Serial Monitor
}

void loop()
{
  Serial.println(analogRead(A0));   // open up Serial Plotter to see graphed values
}
```
