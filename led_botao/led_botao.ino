#define LED_EXTERNO 4 // gpio 4 (d2)
#define BOTAO_EXTERNO 5 // gpio 5 (d1)



void setup() {
  pinMode(LED_EXTERNO, OUTPUT);
  pinMode(BOTAO_EXTERNO, INPUT);

}

void loop() {

  if(digitalRead(BOTAO_EXTERNO)){
    digitalWrite(LED_EXTERNO, HIGH);
  }
  else{

  digitalWrite(LED_EXTERNO, LOW);
  }

}
