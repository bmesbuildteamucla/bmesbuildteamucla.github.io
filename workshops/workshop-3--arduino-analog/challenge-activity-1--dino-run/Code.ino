#include <Servo.h>

Servo myservo;

int watch = 0;                                                          //Keeps track of time so code can run w/o delays
int pos = 0;

int backgroundPin = A1;
int obstaclePin = A2;

const int elementCount = 100;                                           //elementCount refers to number of readings used
int avgBackgroundArray[elementCount];                                   //to calibrate the photoresistors.
int avgObstacleArray[elementCount];
float avgBackground = 0;
float avgObstacle = 0;

float tolerance = 0;
int differenceObstacle;
int differenceBackground;

void setup() {
  myservo.attach(8);                                                    //Operate the Servo using pin 8
  myservo.write(0);                                                     //Write Servo to position 0
  Serial.begin(9600);

  Serial.println("Calibrating photoresistors ...");
  
  for (int i = 0; i < elementCount; i++) {                              //Collect photoresistor calibration data
    avgBackgroundArray[i] = analogRead(backgroundPin);
    avgObstacleArray[i] = analogRead(obstaclePin);

    avgBackgroundArray[i] = map(avgBackgroundArray[i], 0, 10, 0, 100);  //Map the data to a more intelligible range
    avgObstacleArray[i] = map(avgObstacleArray[i], 0, 10, 0, 100);
    
    delay(15);
  }
  
  for (int i = 0; i < elementCount; i++) {                              //Take the average of the calibration data
    avgBackground = avgBackground + avgBackgroundArray[i];
    avgObstacle = avgObstacle + avgObstacleArray[i];
    
    if (i == elementCount - 1) {
      avgBackground = avgBackground / elementCount;
      avgObstacle = avgObstacle / elementCount;
    }
    
  }
  
  Serial.print("avgBackground: ");
  Serial.println(avgBackground);
  Serial.print("avgObstacle: ");
  Serial.println(avgObstacle);

  avgBackground = round(avgBackground);                                 //Round the calibration data
  avgObstacle = round(avgObstacle);



  Serial.print("Rounded avgBackground: ");
  Serial.println(avgBackground);
  Serial.print("Rounded avgObstacle: ");
  Serial.println(avgObstacle);

  Serial.println("Please enter tolerance level");                       //User inputs tolerance level, recommended to be at around 100.
  while (tolerance == 0) {                                              //The tolerance level is compared with the difference between the
    if (Serial.available() > 0) {                                       //photoresistors' current readings and the calibration data average.
      tolerance = Serial.parseFloat();                                  //The tolerance is a float, so use Serial.parseFloat() to collect user input.
    }

  }

  Serial.print("Tolerance: ");
  Serial.println(tolerance);

  delay(2000);                                                          //Gives user time to read output information
  
}

void jump() {
  myservo.write(40);
  watch = 0;                                                            //Resets time since last jump
}

void loop() {

  int background = analogRead(backgroundPin);
  int obstacle = analogRead(obstaclePin);

  background = map(background, 0, 10, 0, 100);                          //Maps the analog input in the same way as previously shown
  obstacle = map(obstacle, 0, 10, 0, 100);

  differenceBackground = abs(avgBackground - background);               //Difference is calculated between current photoresistor
  differenceObstacle = abs(avgObstacle - obstacle);                     //reading and the average calculated during calibration.

  Serial.print(differenceBackground);
  Serial.print(" ");
  Serial.println(differenceObstacle);
  
  if (watch > 60 &&                                                     //watch is used to make sure the Servo is not overloaded with commands. 
  (differenceObstacle >= tolerance                                      //Compares difference in photoresistor readings with the inputted
  ||differenceBackground >= tolerance)) {                               //tolerance level.
    jump();                                       
  }

  if (watch > 30) {                                                     //watch is used instead of delay() to allow the code to keep
    myservo.write(0);                                                   //running. The Servo needs time to position itself.
  }
  
  watch = ++watch;                                                      //Add time to the watch
  
}
