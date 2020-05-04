int luminosidade = 200;
bool status = false;

void setup() {
  Serial.begin(9600); // inicia a Serial
  if (luminosidade > 500) {
    status = false;
    Serial.println("A luz estah desligada");
  }
  if (luminosidade <= 200) {
    status = true;
    Serial.println("A luz estah ligada");
  }


}
void loop() {
}
