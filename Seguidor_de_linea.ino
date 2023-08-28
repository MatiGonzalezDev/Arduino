const int emIzq = 9;
const int emDer = 8;
const int ledTest = 13;

const int AIA = 3;
const int AIB = 11;
const int BIA = 10;
const int BIB = 6;

const int reIzq = A0;
const int reDer = A1;

int valIzq = 0;
int valDer = 0;

void setup(){
  pinMode(emIzq, OUTPUT);
  pinMode(emDer, OUTPUT);
  pinMode(ledTest, OUTPUT);

  digitalWrite(ledTest, LOW);
  analogWrite(emIzq, 0);
  analogWrite(emDer, 0);

  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  analogWrite(AIA, 0);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, 0);

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

  Serial.begin(9600);
}

void loop(){
  digitalWrite(ledTest, HIGH);
  digitalWrite(emIzq, HIGH);
  valIzq = analogRead(reIzq);

  digitalWrite(emDer, HIGH);
  valDer = analogRead(reDer);
  digitalWrite(ledTest, LOW);

  Serial.println(valIzq);
  Serial.println(",");
  Serial.println(valDer);

  movimiento();
  delay(50);
  }

  void movimiento(){
    if(valDer > 970 && valIzq > 970){
      adelante();
      }
     else if(valDer < 970 && valIzq < 970){
        atras();
        }
        else if (valDer < 970 && valIzq > 970){
          derecha();
          }
          else if(valDer > 970 && valIzq < 970){
            izquierda();
            }
    }

    void adelante(){
      analogWrite(AIA, 150);
      analogWrite(AIB, 0);
      analogWrite(BIA, 0);
      analogWrite(BIB, 150);
      }
    void atras(){
      analogWrite(AIA, 0);
      analogWrite(AIB, 150);
      analogWrite(BIA, 150);
      analogWrite(BIB, 0);
      }
    void derecha(){
      analogWrite(AIA, 0);
      analogWrite(AIB, 0);
      analogWrite(BIA, 0);
      analogWrite(BIB, 150);
      }
    void izquierda(){
      analogWrite(AIA, 150);
      analogWrite(AIB, 0);
      analogWrite(BIA, 0);
      analogWrite(BIB, 0);
      }
   
