/* Constantes não mudam. Elas são usadas para setar os
  números dos pinos*/
const int buttonPin = 2; // Pino do Pushbutton
const int ledPin = 13; // Pino do LED
// Variáveis que vão mudar:
int buttonState = 0; // Status do Pushbutton
void setup() {
  // Inicializa o pino do LED como SAÍDA:
  pinMode(ledPin, OUTPUT);
  // Inicializa o pino do Pushbutton como ENTRADA:
  pinMode(buttonPin, INPUT);
}
void loop() {
  // Lê o status do Pushbutton
  buttonState = digitalRead(buttonPin);
  // Checa se o Pushbutton foi pressionado
  // Se pressionado a variável buttonState muda para HIGH:
  if (buttonState == LOW) {
    // Liga o LED:
    digitalWrite(ledPin, HIGH);
  } else {
    // Desliga o LED:
    digitalWrite(ledPin, LOW);
  }
}