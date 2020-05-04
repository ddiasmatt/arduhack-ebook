
#define pin 13

int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  while (i <= 50) {
    Serial.print("O valor da contagem e: ");
    Serial.println(i);
    i++;
  }
  Serial.println("Contagem finalizada");
  digitalWrite(pin, HIGH);

}

void loop()  {

}