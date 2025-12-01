# <a href="../">Workshop 2 - Coding and ESP32</a>

## Activity 6 - LED Three Presses

### Task:
Have an LED toggle on/off after three clicks of a button.

### Circuit:
![Circuit](W2A5.png)

### Code:
```c++
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
