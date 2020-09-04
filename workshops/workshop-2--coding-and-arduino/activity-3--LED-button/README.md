# [Workshop 2 - Coding and Arduino](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino)

## Activity 3 - LED Button

### Task:
Have the LED light up when the button is pressed down and turn off when not.

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-3--LED-button/circuit.png)

### Code: 
```c++
int LED = 2; 
int Button = 7; 
bool on = false;
int previous = 0;

void setup() 
{  
 pinMode (LED, OUTPUT); 	
 pinMode (Button, INPUT); 	
 digitalWrite(LED,LOW);	
}

void loop() 
{
  if (digitalRead(Button) == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
}
```
