# [Workshop 2 - Coding and Arduino](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino)

## Activity 6 - LED Blinking

### Task:
Have two LEDs blink at different rates.
Have one LED blink at a randomly created rate, and the other blink half as fast

### Circuit:
![Circuit](https://bmesbuildteamucla.github.io/workshops/workshop-2--coding-and-arduino/activity-6--LED-blinking/W2A6.png)

### Code:
```c++
int pin1 = 2;
int pin2 = 3; 

int time1 = random(500,1000);	// Random number from 500-1000
int time2 = time1/2;   			// Half as fast

void setup() 
{ 
 pinMode (pin1, OUTPUT); // initialize pin1 as output
 pinMode (pin2, OUTPUT); // initialize pin2 as output
 digitalWrite(pin1,LOW); // start with LED1 off
 digitalWrite(pin2,LOW); // start with LED2 off
}

void loop() 
{ 
  int time = millis();
  if (time % time1 == 0) 
  {
   digitalWrite(pin1, HIGH);
  }
  if (time % time2 == 0) 
  {
   digitalWrite(pin2, HIGH);
  }
  else
  {
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
  }
}
```
