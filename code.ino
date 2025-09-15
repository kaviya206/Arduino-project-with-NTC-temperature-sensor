const int tempPin = A0;   // NTC analog output
const int fanPin = 13;    // LED simulating fan

void setup() {
  Serial.begin(9600);
  pinMode(fanPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(tempPin); // 0 - 1023

  // Map analog reading to approximate temperature range (0°C - 100°C)
  float temperature = map(sensorValue, 0, 1023, 0, 100);

  String fanState;

  // Fan control logic
  if (temperature < 25) {
    digitalWrite(fanPin, LOW);
    fanState = "OFF";
  } 
  else if (temperature < 30) {
    // 50% speed simulation
    digitalWrite(fanPin, HIGH);
    delay(10);
    digitalWrite(fanPin, LOW);
    delay(10);
    fanState = "50%";
  } 
  else {
    digitalWrite(fanPin, HIGH); // Full speed
    fanState = "100%";
  }

  // Print temperature and fan state
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C | Fan: ");
  Serial.println(fanState);

  delay(500);
}
