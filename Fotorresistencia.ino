const int  ledTest = 13;

const int fotoIzq = A0;
const int fotoDer = A1;

int valDer = 0;
int valIzq = 0;

void setup(){
  Serial.begin(9600);

  pinMode(ledTest, OUTPUT);
  digitalWrite(ledTest, LOW);

  digitalWrite(ledTest, HIGH);
  delay(500);
  digitalWrite(ledTest, LOW);
  delay(500);
  digitalWrite(ledTest, HIGH);
  delay(500);
  digitalWrite(ledTest, LOW);
  delay(500);
  digitalWrite(ledTest, HIGH);
  delay(500);
  digitalWrite(ledTest, LOW);
  delay(500);
  }

  void loop(){
    valIzq = analogRead(fotoIzq);
    delay(100);
    
    valDer = analogRead(fotoDer);
    delay(100);

    Serial.println("Izquirda/Derecha");
    Serial.print(valIzq);
    Serial.print(",");
    Serial.println(valDer);
    delay(500);

    }
