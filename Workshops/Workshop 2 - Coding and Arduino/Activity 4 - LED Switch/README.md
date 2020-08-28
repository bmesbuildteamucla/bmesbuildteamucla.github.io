# [Workshop 2](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino)
## Activity 5 - 3 Click LED Toggle

### Task:
Have an LED toggle on/off after three clicks of a button.

### Circuit:

### Code:
```c++
int LED = 2; 
int Button = 7; 
bool on = false;
int previous = 0;

void setup() 
{  
 pinMode (LED, OUTPUT); 	// initialize pin1 as output
 pinMode (Button, INPUT); 	// initialize pin2 as input
 digitalWrite(LED,LOW);	// start with LED off
}

void loop() 
{
  
  int current = digitalRead(Button);
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
