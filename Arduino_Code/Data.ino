#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified();

void setup() {
  Serial.begin(9600);
  if (!accel.begin()) {
    Serial.println("No valid sensor found");
    while (1);
  }
}

void loop() {
  // Read values from the accelerometer
  sensors_event_t event;
  accel.getEvent(&event);

  // Print accelerometer values
  Serial.print(event.acceleration.x); Serial.print(",");
  Serial.print(event.acceleration.y); Serial.print(",");
  Serial.print(event.acceleration.z); Serial.print(",");

  // Check if it's time to read analog sensor data
  static unsigned long lastAnalogReadTime = 0;
  unsigned long currentMillis = millis();
  
  if (currentMillis - lastAnalogReadTime >= 200) {
    lastAnalogReadTime = currentMillis;

    // Read values from the analog sensors
    int sensorValue1 = analogRead(A0);
    int sensorValue2 = analogRead(A1);
    int sensorValue3 = analogRead(A2);
    int sensorValue4 = analogRead(A3);

    // Print sensor values
    Serial.print(sensorValue1); Serial.print(",");
    Serial.print(sensorValue2); Serial.print(",");
    Serial.print(sensorValue3); Serial.print(",");
    Serial.print(sensorValue4);

    // Print a new line to separate data sets
    Serial.println("");
  }
   Serial.println("");

  // Delay to achieve 50 Hz sampling rate for the accelerometer
  delay(20);
}
