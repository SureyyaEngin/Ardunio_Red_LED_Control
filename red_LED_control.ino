void setup() {
  pinMode(7, OUTPUT); // Set digital pin 7 as an OUTPUT
  
}

void loop() {
  digitalWrite(7, HIGH); // Turn the LED on
  delay(500); // Wait for 500 milliseconds
  digitalWrite(7, LOW); // Turn the LED off
  delay(500); // Wait for 500 milliseconds
} 
