int ledRojo = 9;
int ledVerde = 10;
int ledAzul = 11;
int ledTest = 13;

int rojo = 0;
int verde = 0;
int azul = 0;
int todos = 0;

void setup(){
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledTest, OUTPUT);

  analogWrite(ledRojo, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledAzul, 0);

  digitalWrite(ledTest, LOW);

  for(int i=0; i<3; i++){
    digitalWrite(ledTest, HIGH);
    delay(500);
    digitalWrite(ledTest, LOW);
    delay(500);
    }
  }
  void loop(){
      for(azul=0; azul<=255; azul++){
      analogWrite(ledAzul, azul);
      delay(100);
      }
      for(azul=0; azul>=0; azul--){
      analogWrite(ledAzul, azul);
      delay(100);
      }

        for(todos=0; todos<=255; todos++){
          analogWrite(ledRojo, todos);
          analogWrite(ledVerde, todos);
          analogWrite(ledAzul, todos);
          delay(100);
          }
        for(todos=255; todos>=0; todos--){
          analogWrite(ledRojo, todos);
          analogWrite(ledVerde, todos);
          analogWrite(ledAzul, todos);
          delay(100);
          }
    }
