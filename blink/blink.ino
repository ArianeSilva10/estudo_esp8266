#define LED_EXTERNO 4 // gpio 4 (d2)

void setup() {
  pinMode(LED_EXTERNO, OUTPUT);

}

void loop() {
  digitalWrite(LED_EXTERNO, HIGH);
  delay(500);

  digitalWrite(LED_EXTERNO, LOW);
  delay(500);
  

}
