void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read values from four analog sensors
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  
  // Print sensor values to the serial monitor with commas
  Serial.print(sensorValue1);
  Serial.print(",");
  Serial.print(sensorValue2);
  Serial.print(",");
  Serial.print(sensorValue3);
  Serial.print(",");
  Serial.println(sensorValue4);

  // Delay for a short period
  delay(200);
}
