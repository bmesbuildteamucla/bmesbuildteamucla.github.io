# Workshop 4 - Processing

Install [Processing](https://processing.org/download/){:target="_blank"}

## Activities:

#### Activity 1 - Tutorials
* Go on the [Processing Tutorials](https://processing.org/tutorials/){:target="_blank"} website and go through the first four tutorials:

  - Getting Started
  - Processing Overview
  - Coordinate System and Shapes
    - *Remember: (0,0) is at the top left corner*
  - Color

* Important functions/variables

    ```java
    void setup() {   }
    void draw() {   }
    
    size(width, height)
    width
    height
    background(color)
    stroke(color)
    ```

#### Activity 2 - Drawing Lines
* Use the `line(fromX, fromY, toX, toY)` function to draw lines

    <details>
    <summary>Question: Then how are curves drawn?</summary>
    <br>
    Curves are just a set of points with lines drawn between them! This is what we will use to plot our Pulse Ox signal!
    <br>
    </details>

#### Activity 3 - Standard Firmata
* In coding, libraries give you access to previously written functions and code
  - Ex: Servo library lets us easily use Servo motors

* In order for Procesesing to connect to an Arduino, we need to use a library called Firmata

* To use Firmata in Arduino:
  - In the Arduino IDE, go to **Tools** and select **Manage Libraries**
  - Search for "Firmata" in the top bar
  - Install the Firmata library
  - In the Arduino IDE, got to **File** and then **Examples**
  - Under **Firmata**, select **StandardFirmata**
  - Upload code to your Arduino

* To use Firmata in Processing:
  - In the Processing IDE, go to **Sketch**, **Import Library...**, then **Add Library...**
  - Search for "Firmata" in the top bar
  - Select **Arduino (Firmata)** and install
  - At the beginning of your Processing code, copy the following three lines to import libraries:
    ```java
    import processing.serial.*;
    import cc.arduino.*;
    import org.firmata.*;
    ```


#### Activity 4 - Programming your Arduino using Processing
* Use Proceessing to control your Arduino:
  - Turn on LEDs
  - Flash LEDs
  - Read in inputs

* To do this, we need to talk about classes:
  - Classes are a blueprint or prototype that defines the variables and methods common to all objects of a certain kind
    - In the real world, you have many objects of the same kind
    - For example, your dog is one of many dogs in the world
    - In programming, we can say that your dog object is an *instance* of the class of objects known as dogs
    - Dogs have some state (breed, color, size) and behavior (bark, run) in common
    - However, each dog's state is independent of and can be different from other dogs
    - In programming, we can create a class called **dog** to serve as a blueprint for all the different types of dogs
    - These classes have unique varaibles and functions associated with them
  
  - We won't go over creating classes, but we will be using them
    - For example, you already used classes when using Servo motors
    - In Processing, we need to access the **Arduino** class to control your Arduino
    
  - Class Syntax
    - To declare an object of a certain class:
      ```java
      class name;
      Servo pauley;
      Arduino boelter;
      ```
    - To initialize new object in Java:
      ```java
      name = new class;
      pauley = new Servo;
      boelter = new Arduino(____,____,____);
      ```
    - To access specific class functions:
      ```c++
      name.function();
      pauley.write(angle);
      boelter.analogRead(pin);
      ```
    - To access specific class variables:
      ```c++
      class.variable;
      Arduino.OUTPUT;
      Arduino.HIGH;
      ```

* Once you declare an **Arduino** object called `myArduino`
    - In `void setup()`, copy the following two lines
      ```java
      printArray(Arduino.list());                                 // lists USB ports, find the one connected to Arduino
      myArduino = new Arduino(this, Arduino.list()[0], 57600);    // may need to change index value (where it says [0]) based on printed array
      ```
    - This initializes your `myArduino` object and links your Arduino to Processing
    - In Processing, use void draw() instead of void loop().
    - Most basic code (if statements, while loops, for loops, etc.) will be the same in Processing. For any Arduino-specific function, make sure to first declare the object name and then the function. For our code, for instance, you would use "myArduino.digitalWrite(LED, Arduino.HIGH);" to turn on an LED.
    - Note: If you are on a Windows computer, your port index (where it says "[0]" above) will usually automatically hook up to the Arduino. However, on Mac, you will need to manually select the port. If you are having issues with connecting your Arduino, manually input the port number. Check the Arduino IDE under "Tools" > "Port" to see which port number the Arduino is connected to. Also make sure that you uploaded the Firmata code from Arduino IDE to your Arduino before running your Processing code.


<!--
hide solutions
-->
<!--
## Solutions:
#### Activity 4 - Programming your Arduino using Processing
* Example code:

    ```java
    import cc.arduino.*;

    Arduino jack;
    int LED = 2;
    int button = 7;

    void setup()
    {
      printArray(Arduino.list());
      jack = new Arduino(this, Arduino.list()[0], 57600); // may need to change index value based on printed array
      jack.pinMode(LED, Arduino.OUTPUT);
      jack.pinMode(button, Arduino.INPUT);
    }

    void draw()
    {
      if (jack.digitalRead(button) == Arduino.HIGH)
      {
        jack.digitalWrite(LED, Arduino.HIGH);
      }
      else 
      {
        jack.digitalWrite(LED, Arduino.LOW);
      }
    }
    ```
-->
