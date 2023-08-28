const int irIzquierda = 9;
const int irDerecha = 8;

const int trIzquierda = A0;
const int trDerecha = A1;

int refDer = 0;
int refIzq = 0;

void setup (){
  Serial.begin(9600);
  pinMode(irIzquierda, OUTPUT);
  pinMode(irDerecha, OUTPUT);

  digitalWrite(irIzquierda, LOW);
  digitalWrite(irDerecha, LOW);
  }

  void loop(){
    digitalWrite(irIzquierda, HIGH);
    refIzq = analogRead(trIzquierda);

    delay(100);
    digitalWrite(irIzquierda, LOW);
    delay(100);
    
    digitalWrite(irDerecha, HIGH);
    refDer = analogRead(trDerecha);
    delay(100);
    digitalWrite(irDerecha, LOW);

    if(refIzq < 700 && refDer < 700)Serial.println("Blanco");
    if(refIzq > 1010 && refDer > 1010)Serial.println("Negro");

    delay(500);
    }
