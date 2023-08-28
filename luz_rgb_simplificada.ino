int ledRojo = 9;
int ledVerde = 10;
int ledAzul = 11;
int ledTest = 13;

void setup(){
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);

  analogWrite(ledRojo, 255);
  analogWrite(ledVerde, 255);
  analogWrite(ledAzul, 255);

  digitalWrite(ledTest, LOW);

  for(int i=0; i<3; i++){
    digitalWrite(ledTest, HIGH);
    delay(500);
    digitalWrite(ledTest, LOW);
    delay(500);
    }
  }
  void loop(){
    prendeyApagaColor(ledRojo);
    prendeyApagaColor(ledVerde);
    prendeyApagaColor(ledAzul);
    
    }

    void prendeyApagaColor(int pin){
      for(int i = 255; i >= 0; i--){
        analogWrite(pin, i);
        delay(10);
        }
      }
