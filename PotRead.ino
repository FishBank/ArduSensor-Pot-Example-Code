/* ArduSensor Pot Read

Reads the ArduSensor Pot, and prints how much it has been turned on the Serial
monitor

Qtechknow kits required:
  ArduSensor Pot
  
made on 12 July 12
created by Quin
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor Pot

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Pot
  ArduSensorValue=analogRead(0);

  int val = map(ArduSensorValue, 0, 1023, 0, 1000);  // convert the value
  // to easily readable numbers
  
  Serial.println(val);  // print the value on the Serial monitor
  delay(100);
}
