int Led1 = 2;
int Led2 = 8;
int Led3 = 12;
int Led4 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char Led = Serial.read();
    Serial.println(Led);
    switch (Led) {
      case 'a':
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, LOW);
        digitalWrite(Led3, LOW);
        digitalWrite(Led4, LOW);
        break;
      case 'b':
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, LOW);
        digitalWrite(Led4, LOW);
        break;
      case 'c':
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, LOW);
        break;
      case 'd':
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, HIGH);
        break;
      default:
        Serial.print("Valor ");
        Serial.print(Led);
        Serial.println(" incorreto.");
        digitalWrite(Led1, LOW);
        digitalWrite(Led2, LOW);
        digitalWrite(Led3, LOW);
        digitalWrite(Led4, LOW);
    }
  }
}
