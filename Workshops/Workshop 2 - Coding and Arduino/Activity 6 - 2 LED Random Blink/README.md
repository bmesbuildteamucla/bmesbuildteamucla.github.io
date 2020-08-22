# Activity 6 - 2 LED Random Blink

### Task:
Have two LEDs blink at different rates.
Have one LED blink at a randomly created rate, and the other blink half as fast

### Circuit:

### Code:
```C++
int pin1 = 2;
int pin2 = 3; 

int rand1 = random(0,500);		// Random number from 0-500
int rand2 = random(500,1000);   // Random number from 500-1000

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
  if (time % rand1 == 0) 
  {
  	digitalWrite(pin1, HIGH);
  }
  if (time % rand2 == 0) 
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
