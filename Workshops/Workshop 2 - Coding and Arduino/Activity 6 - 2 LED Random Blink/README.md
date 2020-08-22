# Activity 6 - 2 LED Random Blink

### Task:
Have two LEDs blink at different rates.
Have one LED blink at a randomly created rate, and the other blink half as fast

### Circuit:
[Circuit](https://github.com/bmesbuildteamucla/bmesbuildteamucla.github.io/blob/master/Workshops/Workshop%202%20-%20Coding%20and%20Arduino/Activity%206%20-%202%20LED%20Random%20Blink/Activity%206.png)
### Code:
```C++
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
