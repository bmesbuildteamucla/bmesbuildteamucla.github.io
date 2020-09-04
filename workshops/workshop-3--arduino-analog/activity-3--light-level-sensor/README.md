# [Workshop 3 - Arduino Analog](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog)

## Activity 3 - Light Level Sensor

### Task:
* Use a photoresistor to graph light levels in the room that you’re sitting in
* Slowly cover the photodiode with your hand to change the graph.
* Graph using Serial Plotter

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-3--arduino-analog/activity-3--light-level-sensor/circuit.png)

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
