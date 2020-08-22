# Activity 2 - LED Flashing

### Task:
Have the yellow LED turned on, then every 5 seconds turn off the yellow LED and have the red LED flash 10 times.

### Circuit:
![Circuit](https://github.com/bmesbuildteamucla/Workshop-2/blob/master/Activity%202%20-%20LED%20Flashing/Activity%202.PNG)

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
