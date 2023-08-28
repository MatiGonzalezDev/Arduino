int ledBlancoDerecho = 2;
int ledBlancoIzquierdo = 4;
int ledRojoDerecho = 8;
int ledRojoIzquierdo = 7;
int ledTest = 13;

void setup(){
  pinMode(ledBlancoDerecho, OUTPUT);
  pinMode(ledBlancoIzquierdo, OUTPUT);
  pinMode(ledRojoDerecho, OUTPUT);
  pinMode(ledRojoIzquierdo, OUTPUT);

  digitalWrite(ledBlancoDerecho, LOW);
  digitalWrite(ledBlancoIzquierdo, LOW);
  digitalWrite(ledRojoDerecho, LOW);
  digitalWrite(ledRojoIzquierdo, LOW);

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
   digitalWrite(ledBlancoDerecho, HIGH);
   digitalWrite(ledBlancoIzquierdo, HIGH);
   digitalWrite(ledRojoDerecho, HIGH);
   digitalWrite(ledRojoIzquierdo, HIGH);
   delay(1000);
   digitalWrite(ledBlancoDerecho, LOW);
   digitalWrite(ledBlancoIzquierdo, LOW);
   digitalWrite(ledRojoIzquierdo, LOW);
   digitalWrite(ledRojoDerecho, LOW);
   delay(1000);
   
   parpadeo(ledBlancoDerecho, 5, 500);
   
   digitalWrite(ledBlancoDerecho, HIGH);
   digitalWrite(ledBlancoIzquierdo, HIGH);
   
   parpadeo(ledRojoDerecho, 3, 500);
   parpadeo(ledRojoIzquierdo, 3, 500);

   digitalWrite(ledRojoDerecho, HIGH);
   digitalWrite(ledRojoIzquierdo, HIGH);
   }
   void parpadeo(int ledParpadea, int veces, int tiempo){
    for(int j=0; j<=veces; j++){

      digitalWrite(ledParpadea, LOW);
      delay(tiempo);
      digitalWrite(ledParpadea, HIGH);
      delay(tiempo);
      }
    }
