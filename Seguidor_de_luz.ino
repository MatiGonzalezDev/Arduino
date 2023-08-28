const int ledTest = 13;

const int fotoIzq = A0;
const int fotoDer = A1;

int AIA = 3;
int AIB = 11;
int BIA = 9;
int BIB = 10;

int resIzq = 0;
int resDer = 0;

void setup(){
  Serial.begin(9600);

  pinMode(ledTest, OUTPUT);
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  digitalWrite(ledTest, LOW);
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
  
  }

  void loop(){
    resIzq = analogRead(fotoIzq);
    resDer = analogRead(fotoDer);
    
    Serial.print(resIzq);
    Serial.print(",");
    Serial.println(resDer);

    if(resDer < 500 && resIzq < 500){
      adelante();
      }
      else if (resDer < 500 && resIzq > 500){
        izquierda();
        delay(20);
        }
        else{
          derecha();
          delay(20);
          }
    }

    void adelante(){
      analogWrite(AIA, 150);
      analogWrite(AIB, 0);
      analogWrite(BIA, 0);
      analogWrite(BIB, 150);
      
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
