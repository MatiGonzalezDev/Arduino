int disparo = 2;
const int echo = 4;
long tiempoPulso;
float dstMedida;
const int valVacio = 12; // medición con el recipiente vacío.
const int capacidad = 7; // medición del recipiente vacío, menos medición con el recipiente al 100%
float nivel = 0;
float porcentaje = 0;
void setup() {
Serial.begin(9600);
pinMode(disparo, OUTPUT);
pinMode(echo, INPUT);
digitalWrite(disparo, LOW);
}
void loop() {
digitalWrite(disparo, LOW);
delayMicroseconds(5); //se pone en bajo y 5 ms para lograr un disparo mas limpio después.
digitalWrite(disparo, HIGH);
delayMicroseconds(10);
digitalWrite(disparo, LOW);
tiempoPulso = pulseIn(echo, HIGH);
dstMedida = 0.0340 / 2 * tiempoPulso;
nivel = valVacio - dstMedida; //el valor de nivel no está en ninguna unidad. Solo es referencial.
porcentaje = nivel * 100 / capacidad;
Serial.print("El recipiente está ");
Serial.print(porcentaje);
Serial.println("% lleno");
delay(500);
}
