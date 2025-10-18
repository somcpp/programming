int led = 9;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Gradually increase brightness
  for(int i = 0; i <= 255; i++) {
    analogWrite(led, i);
    delay(5);  
  }

  // Gradually decrease brightness
  for(int bright = 255; bright >= 0; bright--) {
    analogWrite(led, bright);
    delay(5);  
  }
}
