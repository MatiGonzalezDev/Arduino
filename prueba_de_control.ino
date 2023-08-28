#include <IRremote.h>

 int ledTest = 13;

 int receptorControl = 2;
 IRrecv receptor(receptorControl);
 decode_results codigoLeido;

  void setup(){
    Serial.begin(9600);
    
    receptor.enableIRIn();

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
      if(receptor.decode(&codigoLeido))
       {
        Serial.print("0x");
        Serial.println(codigoLeido.value, HEX);
        delay(50);
        receptor.resume();
        }
      }
