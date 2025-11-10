 # [Workshop 2 - Coding and Arduino](/workshops/workshop-2--coding-and-arduino)

## Activity 4 - LED Button

### Task:
Have the LED light up when the button is pressed down and turn off when not.

### Circuit:
![Circuit](W2A4_Circuit%20(2).png)

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
