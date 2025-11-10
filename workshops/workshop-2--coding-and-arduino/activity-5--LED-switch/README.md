# [Workshop 2 - Coding and Arduino](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino)

## Activity 4 - LED Switch

### Task:
Have the LED turn on if off when the button is clicked and turn off if on when the button is clicked (toggle on/off).

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-4--LED-switch/W2A4_Circuit%20(2).png)

### Code:
```c++
int LED = 2; 
int Button = 7; 
bool on = false;
int previous = 0;
int current = 0;
void setup() 
{  
 pinMode (LED, OUTPUT); 	// initialize pin1 as output
 pinMode (Button, INPUT); 	// initialize pin2 as input
 digitalWrite(LED,LOW);	// start with LED off
}

void loop() 
{
  
  current = digitalRead(Button);
  // check for button press (to account for holding)
  if (current != previous)				
  {
  	
    if (digitalRead(Button) == HIGH && on == false)
  	 {
  	  digitalWrite(LED, HIGH);
  	  on = true;
 	 }
 	else if (digitalRead(Button) == HIGH && on == true) 
 	 {
 	   digitalWrite(LED, LOW);
 	   on = false;
 	 }
  }
  previous = current;
}
```
