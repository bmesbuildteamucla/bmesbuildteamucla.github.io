# Workshop 4 - Processing

Install [Processing](https://processing.org/download/)

## Activities:

#### Activity 1 - Tutorials
* Go on the [Processing Tutorials](https://processing.org/tutorials/) website and go through the first four tutorials:

  - Getting Started
  - Processing Overview
  - Coordinate System and Shapes
    - *Remember: (0,0) is at the top left corner*
  - Color

* Important functions/variables

    ```java
    size(width, height)
    background(color)
    width
    height
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

* To install Firmata:
  - In the Arduino IDE, go to **Tools** and select **Manage Libraries**
  - Type "Firmata" into the search bar
  - Install the Firmata library

* To use Firmata:
  - In the Arduino IDE, got to **File** and then **Examples**
  - Under **Firmata**, select **StandardFirmata**
  - Upload code to your Arduino
  - Now, you can use Processing to control your Arduino

#### Activity 4 - Programming your Arduino using Processing
* Use Proceessing to control your Arduino:
  - Turn on LEDs
  - Flash LEDs
  - Read in inputs

* To do this, we need to learn about classes:
  - Classes are 

## Solutions:
* 
