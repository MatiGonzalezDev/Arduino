int ledBlancoDerecho = 2;
int ledBlancoIzquierdo = 4;
int ledRojoDerecho = 7;
int ledRojoIzquierdo = 8;
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

  pinMode(ledTest,OUTPUT);
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

    parpadeo(ledBlancoDerecho, 5, 500);
    parpadeo(ledBlancoIzquierdo, 10, 250);
    parpadeo(ledRojoDerecho, 5, 1000);
    parpadeo(ledRojoIzquierdo, 10, 750);

    digitalWrite(ledBlancoDerecho, LOW);
    digitalWrite(ledBlancoIzquierdo, LOW);
    digitalWrite(ledRojoDerecho, LOW);
    digitalWrite(ledRojoIzquierdo, LOW);
    delay(2000);
    }

    void parpadeo(int ledParpadea, int veces, int tiempo){
      for(int j=0; j <= veces; j++){
        digitalWrite(ledParpadea, LOW);
        delay(tiempo);
        digitalWrite(ledParpadea, HIGH);
        delay(tiempo);
        }
      }
    
