#[Workshop 2](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino)
## Activity 5 - 3 Click LED Toggle

### Task:
Have an LED toggle on/off after three clicks of a button.

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%205%20-%20LED%20Three%20Presses/Circuit.png)

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
