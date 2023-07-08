// Relay Module Connections
int relayPin = 2; // Enter the appropriate pin number

void setup() {
  pinMode(relayPin, OUTPUT); // Set the relay pin as an output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readString(); // Read the input string from serial
    input.trim(); // Remove leading/trailing whitespaces
    
    if (input == "FIRE") {
      digitalWrite(relayPin, HIGH); // Turn ON the relay
      Serial.println("FIRE detected. Water pump ON.");
    } else {
      digitalWrite(relayPin, LOW); // Turn OFF the relay
      Serial.println("No FIRE. Water pump OFF.");
    }
  }
}
