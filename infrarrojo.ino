const int emIzquierda = 9;
const int emDerecha = 8;

const int ledTest = 13;

const int reIzquierda = A0;
const int reDerecha = A1;

int refDer = 0;
int refIzq = 0;

void setup(){
  Serial.begin(9600);
  
  pinMode(emIzquierda, OUTPUT);
  pinMode(emDerecha, OUTPUT);
  pinMode(ledTest, OUTPUT);

  digitalWrite(emIzquierda, LOW);
  digitalWrite(emDerecha, LOW);
  digitalWrite(ledTest, LOW);

  for(int i=0; i<3; i++){
    digitalWrite(ledTest, HIGH);
    delay(500);
    digitalWrite(ledTest, LOW);
    delay(500);
    }
  }

  void loop(){
    digitalWrite(emIzquierda, HIGH);
    refIzq = analogRead(reIzquierda);
    delay(100);
    digitalWrite(emIzquierda, LOW);

    digitalWrite(emDerecha, HIGH);
    refDer = analogRead(reDerecha);
    delay(100);
    digitalWrite(emDerecha, LOW);

    Serial.println("Izquierda/Derecha");
    Serial.print(refIzq);
    Serial.print(",");
    Serial.println(refDer);

    delay(500);
    }
