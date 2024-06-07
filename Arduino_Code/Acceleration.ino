#include <Wire.h>
#include <Adafruit_Sensor.h> 
#include <Adafruit_ADXL345_U.h>

// Create an instance of the accelerometer
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified();

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);  

  // Initialize the accelerometer
  if (!accel.begin()) {
    // If no valid sensor is found, print an error message
    Serial.println("No valid sensor found");

    // Enter an infinite loop, effectively halting the program
    while(1);
  }
}

void loop() {
  // Create a structure to hold the sensor event data
  sensors_event_t event; 

  // Read the accelerometer values into the event structure
  accel.getEvent(&event);

  // Print the X, Y, and Z acceleration values to the serial monitor
  Serial.print(event.acceleration.x); Serial.print(",");
  Serial.print(event.acceleration.y); Serial.print(",");
  Serial.print(event.acceleration.z); Serial.print(",");

  // Print a new line to separate data sets
  Serial.println("");

  // Delay for 20 milliseconds to achieve a sampling rate of 50 Hz
  delay(20);
}
