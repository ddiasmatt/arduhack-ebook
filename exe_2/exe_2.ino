float dolar = 5.23;
String nome = "Harv";
bool alarme = false;

void setup() {
  Serial.begin(9600); // inicia a Serial
  Serial.print("Cotacao do Dolar e: ");
  Serial.println(dolar);

  Serial.print("Meu nome e: ");
  Serial.println(nome);

  Serial.print("O status do alarme e: ");
  Serial.println(alarme);
  //substituindo os valores

  dolar = 5.54;
  nome = "Mateus Dias";
  alarme = true;

  //printando novamente
  Serial.print("Cotacao do Dolar e: ");
  Serial.println(dolar);

  Serial.print("Meu nome e: ");
  Serial.println(nome);

  Serial.print("O status do alarme e: ");
  Serial.println(alarme);

}
void loop() {
}
