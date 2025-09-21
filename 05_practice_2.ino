#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // 1초 동안 켜기
  digitalWrite(PIN_LED, LOW);
  delay(1000);

  // 1초 동안 5회 깜빡이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, HIGH);
    delay(100);
    digitalWrite(PIN_LED, LOW);
    delay(100);
  }

  // LED 끄기
  digitalWrite(PIN_LED, HIGH);

  // infinite loop
  while (1) { }
}
