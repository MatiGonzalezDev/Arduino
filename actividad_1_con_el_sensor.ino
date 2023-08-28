int disparo = 2;
const int echo = 4;
long tiempoPulso;
float dstMedida;
void setup() {
Serial.begin(9600);
pinMode(disparo, OUTPUT);
pinMode(echo, INPUT);
digitalWrite(disparo, LOW);
}
void loop() {
digitalWrite(disparo, LOW);
delayMicroseconds(5);
digitalWrite(disparo, HIGH);
delayMicroseconds(10);
digitalWrite(disparo, LOW);
tiempoPulso = pulseIn(echo, HIGH);
dstMedida = 0.0340 / 2 * tiempoPulso;
for(int i=0; i<=dstMedida; i++){
Serial.print("*");
}
Serial.println("*");
delay(50);
} 
