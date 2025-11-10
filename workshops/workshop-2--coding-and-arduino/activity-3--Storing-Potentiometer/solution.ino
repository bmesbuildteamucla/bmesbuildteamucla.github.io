// C++ code
//
int signalPin = A1;
int data[5] = {0,0,0,0,0}; //initialize arr to 0s
int minVal, maxVal;

void setup()
{
  pinMode(signalPin, INPUT);
  Serial.begin(115200);
}

void loop()
{
  int newVal = analogRead(signalPin);
  
  //use a backwards loop to shift all values right by one
  //optional: find max and min here as well. This is a basic max/min finder
  minVal = 1147483647;
  maxVal = -1;
  for(int i=4; i>=1; i--) {
    data[i] = data[i - 1];
    if (data[i - 1] > maxVal) {
      maxVal = data[i - 1];
    }
    if (data[i - 1] < minVal) {
      minVal = data[i - 1];
    }
  }
  data[0] = newVal;
  
  //optional: don't forget to compare newVal against max/min
  if (newVal > maxVal) {
    maxVal = newVal;
  }
  if (newVal < minVal) {
    minVal = newVal;
  }
  
  //print all values
  Serial.print("Data: ");
  Serial.print(data[0]);
  Serial.print(", ");
  Serial.print(data[1]);
  Serial.print(",");
  Serial.print(data[2]);
  Serial.print(",");
  Serial.print(data[3]);
  Serial.print(",");
  Serial.println(data[4]);
  
  //optional: print max/min values:
  Serial.print("Max val: ");
  Serial.print(maxVal);
  Serial.print(", Min val: ");
  Serial.println(minVal);

  delay(5000); // Wait for 5s
}