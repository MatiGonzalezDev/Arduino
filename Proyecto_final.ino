int disparo = 3;
int eco = 5;

const int AIA = 9;
const int AIB = 10;
const int BIA = 6;
const int BIB = 11;

int ledBlancoDerecho = 2;
int ledBlancoIzquierdo = 4;
int ledRojoDerecho = 7;
int ledRojoIzquierdo = 8;

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

  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  pinMode(ledTest, OUTPUT);

  analogWrite(AIA, 0);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, 0);

  
  pinMode(ledBlancoDerecho, OUTPUT);
  pinMode(ledBlancoIzquierdo, OUTPUT);
  pinMode(ledRojoDerecho, OUTPUT);
  pinMode(ledRojoIzquierdo, OUTPUT);

  digitalWrite(ledBlancoDerecho, LOW);
  digitalWrite(ledBlancoIzquierdo, LOW);
  digitalWrite(ledRojoDerecho, LOW);
  digitalWrite(ledRojoIzquierdo, LOW);

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

    if(dstMedida > 12.00){
      movimiento0();
    }
    else if(dstMedida < 12.00){     
      movimiento1();
    }
      if(dstMedida > 12.00){
            movimiento2();
        }
        else if(dstMedida < 12.00){
                movimiento3();
        }
        if(dstMedida > 12.00){
          movimiento4();
        }
        else if(dstMedida < 12.00){
          movimiento5();
        }
        else{
          movimiento6();
        }
  }
  void movimiento0(){
    adelante();
    }

  void movimiento1(){
      parar();
      delay(200);
      parpadeoIzq(3);
      izquierda();
      delay(600);
      parar();
      delay(200);
      digitalWrite(disparo, HIGH);
      delayMicroseconds(10);
      digitalWrite(disparo, LOW);

      tiempoPulso = pulseIn(eco, HIGH);
      dstMedida = 0.0340 / 2 * tiempoPulso;
  }
  void movimiento2(){
        adelante();
        } 
    void movimiento3(){ 
      parpadeoDer(3);     
      derecha();
      delay(800);
      parar();
      delay(200);
      digitalWrite(disparo, HIGH);
      delayMicroseconds(10);
      digitalWrite(disparo, LOW);

      tiempoPulso = pulseIn(eco, HIGH);
      dstMedida = 0.0340 / 2 * tiempoPulso;

    }
    void movimiento4(){
      adelante();
    }
    void movimiento5(){
          parar();
          delay(200);
          parpadeoDer(3);
          derecha();
          delay(600);
          parar();
          delay(200);
          digitalWrite(disparo, HIGH);
          delayMicroseconds(10);
          digitalWrite(disparo, LOW);

          tiempoPulso = pulseIn(eco, HIGH);
          dstMedida = 0.0340 / 2 * tiempoPulso;
      }
    void movimiento6(){
      adelante();
    }
    
    void adelante(){
      analogWrite(AIA,0);
      analogWrite(AIB,170);
      analogWrite(BIA,0);
      analogWrite(BIB,170);
      luz();
      }
      
      void atras(){
        analogWrite(AIA,170);
        analogWrite(AIB,0);
        analogWrite(BIA,170);
        analogWrite(BIB,0);
        }

        void derecha(){
          analogWrite(AIA,170);
          analogWrite(AIB,0);
          analogWrite(BIA,0);
          analogWrite(BIB,170);
          }

          void izquierda(){
            analogWrite(AIA,0);
            analogWrite(AIB,170);
            analogWrite(BIA,170);
            analogWrite(BIB,0);
            }

            void parar(){
              analogWrite(AIA,0);
              analogWrite(AIB,0);
              analogWrite(BIA,0);
              analogWrite(BIB,0);
              luzRoja();
              parpadeo(3);
              }
              
              void parpadeo(int veces){
                for(int j=0; j <= veces; j++){
                  digitalWrite(ledBlancoDerecho, LOW);
                  digitalWrite(ledBlancoIzquierdo, LOW);
                  delay(150);
                  digitalWrite(ledBlancoDerecho, HIGH);
                  digitalWrite(ledBlancoIzquierdo, HIGH);
                  delay(150);
                  }
                  }

                  void parpadeoIzq(int veces){
                    digitalWrite(ledBlancoDerecho, LOW);
                    digitalWrite(ledRojoDerecho, LOW);
                    for(int j=0; j <= veces; j++){
                    digitalWrite(ledBlancoIzquierdo, LOW);
                    digitalWrite(ledRojoIzquierdo, LOW);
                    delay(150);
                    digitalWrite(ledBlancoIzquierdo, HIGH);
                    digitalWrite(ledRojoIzquierdo, HIGH);
                    delay(150);
                  }
                  }
                  void parpadeoDer(int veces){
                    digitalWrite(ledBlancoIzquierdo, LOW);
                    digitalWrite(ledRojoIzquierdo, LOW);
                    for(int j=0; j <= veces; j++){
                    digitalWrite(ledBlancoDerecho, LOW);
                    digitalWrite(ledRojoDerecho, LOW);
                    delay(150);
                    digitalWrite(ledBlancoDerecho, HIGH);
                    digitalWrite(ledRojoDerecho, HIGH);
                    delay(150);
                  }
                  }

                  void luzRoja(){
                      digitalWrite(ledRojoDerecho, HIGH);
                      digitalWrite(ledRojoIzquierdo, HIGH);
                    }
                   
                   void luz(){
                    digitalWrite(ledBlancoDerecho, HIGH);
                    digitalWrite(ledBlancoIzquierdo, HIGH);
                    digitalWrite(ledRojoDerecho, LOW);
                    digitalWrite(ledRojoIzquierdo, LOW);
                    }
