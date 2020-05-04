int pinoLED = 13;

/* #1 – Blink com LED */
void setup()
{
  pinMode(pinoLED, OUTPUT);
}
void loop()
{
  digitalWrite(pinoLED, HIGH); // Liga o LED
  delay(1000); // Aguarda 1 segundo
  digitalWrite(pinoLED, LOW); // Desliga o LED
  delay(1000); // Aguarda 1 segundo
}
/* Experimente mudar o tempo dentro do delay para ver a
  velocidade em que o LED pisca mudar*/