const int AIA = 9;
const int AIB = 10;
const int BIA = 6;
const int BIB = 11;

const int ledTest = 13;

void setup(){
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  pinMode(ledTest, OUTPUT);

  analogWrite(AIA, 0);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, 0);

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
    adelante();
    }

    void adelante(){
      analogWrite(AIA,0);
      analogWrite(AIB,255);
      analogWrite(BIA,0);
      analogWrite(BIB,255);
      }
      
      void atras(){
        analogWrite(AIA,255);
        analogWrite(AIB,0);
        analogWrite(BIA,255);
        analogWrite(BIB,0);
        }

        void derecha(){
          analogWrite(AIA,255);
          analogWrite(AIB,0);
          analogWrite(BIA,0);
          analogWrite(BIB,255);
          }

          void izquierda(){
            analogWrite(AIA,0);
            analogWrite(AIB,255);
            analogWrite(BIA,255);
            analogWrite(BIB,0);
            }

            void parar(){
              analogWrite(AIA,0);
              analogWrite(AIB,0);
              analogWrite(BIA,0);
              analogWrite(BIB,0);
              delay(500);
              }

              void parpadeo(int veces){
                for(int j=0; j<veces; j++){
                  digitalWrite(ledTest, HIGH);
                  delay(200);
                  digitalWrite(ledTest, LOW);
                  delay(200);
                  }
                }
