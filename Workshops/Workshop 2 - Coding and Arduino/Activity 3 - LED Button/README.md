## Activity 3 - LED Button

### Task:
Have the LED light up when the button is pressed down and turn off when not.

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%203%20-%20LED%20Button/W2A3_Circuit.png)
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
