int ledRojo = 9;
int ledVerde = 10;
int ledAzul = 11;
int ledTest = 13;

void setup(){
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul,OUTPUT);

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
    generarColor(56, 29, 98);
    delay(500);
    generarColor(224, 5, 227);
    delay(500);
    }
    void generarColor(int R,int V,int A){
      analogWrite(ledRojo, R);
      analogWrite(ledVerde, V);
      analogWrite(ledAzul, A);
      }
