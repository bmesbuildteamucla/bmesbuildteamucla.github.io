# Activity 5 - 3 Click LED Toggle

### Task:
Have an LED toggle on/off after three clicks of a button.

### Circuit:
https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/blob/master/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%205%20%20-%203%20Click%20LED%20Toggle/Activity%205.png

### Code:
```C++
int pin1 = 7; 
int pin2 = 12; 
bool on = false;
int previous = 0;
int buttonClicks = 0;

void setup() 
{ 
 pinMode (pin1, OUTPUT); 	// initialize pin1 as output
 pinMode (pin2, INPUT); 	// initialize pin2 as input
 digitalWrite(pin1,LOW);	// start with LED off
}

void loop() 
{
  
  int current = digitalRead(pin2);		// reset current as current reading
  if (current != previous)				// check for button press (to account for holding)
  {
    buttonClicks++;			// increment button counter by 1 when button is pressed    
  	
    if (digitalRead(pin2) == HIGH && on == false && buttonClicks % 3 == 0)
  	 {
  	  digitalWrite(pin1, HIGH);
  	  on = true;
 	 }
 	else if (digitalRead(pin2) == HIGH && on == true && buttonClicks % 3 == 0) 
 	 {
 	   digitalWrite(pin1, LOW);
 	   on = false;
 	 }
  }
  previous = current;		// update current value as previous value for next iteration
}
```
