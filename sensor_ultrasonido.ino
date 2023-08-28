int disparo = 3;
int eco = 5;

int ledTest = 13;

long tiempoPulso;
float dstMedida;

void setup(){
  Serial.begin(9600);
  
  pinMode(ledTest, OUTPUT);
  pinMode(disparo, OUTPUT);
  pinMode(eco, INPUT);

  digitalWrite(disparo, LOW);
  digitalWrite(ledTest, LOW);

  digitalWrite(ledTest, HIGH);
  for(int i=0; i<3; i++){
    digitalWrite(ledTest, LOW);
    delay(500);
    digitalWrite(ledTest, HIGH);
    delay(500);
    }
  }
  void loop(){
    digitalWrite(disparo, HIGH);
    delayMicroseconds(10);
    digitalWrite(disparo, LOW);

    tiempoPulso = pulseIn(eco, HIGH);
    dstMedida = 0.0340 / 2 * tiempoPulso;

    Serial.println("Tiempo/Distancia");
    Serial.print(tiempoPulso);
    Serial.print("/");
    Serial.println(dstMedida);

    delay(500);
    }
