 int startValue = 5;
int ledPin = 13;

// Blinks the LED 'times' times, with a short on/off delay each time
void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while (count >= 1) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);   // blink the LED 'count' times
    delay(1000);        // wait 1 second before next step

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // everything happens once in setup(), so loop stays empty
}

 