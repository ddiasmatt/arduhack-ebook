#define pin 13

void setup() {
	Serial.begin(9600);
  pinMode(pin, OUTPUT);
  for(int i = 50; i >= 0; i--){
  	Serial.print("O valor da contagem e: ");
    Serial.println(i);
  }
  Serial.println("Contagem finalizada");
  digitalWrite(pin, HIGH);

}

void loop()  {

}