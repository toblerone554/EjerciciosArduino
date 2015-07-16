
int pinR=13; 
int pinV=12;
int pinA=11;
int pausa=500;

void setup() {
pinMode(pinV,OUTPUT);
pinMode(pinR,OUTPUT);
pinMode(pinA,OUTPUT);

Serial.begin(9600);
}

void parpadeo(int ledParpadeo, int nParpadeo, int pausaParpadeo)
{ for (int i=0;i<nParpadeo;i++)
{
digitalWrite(ledParpadeo,HIGH);
delay(pausaParpadeo);

(digitalWrite(ledParpadeo,LOW));  
delay(pausaParpadeo);  
}
  
  }




void loop() {

int valor=analogRead(A0);
pausa=valor;
Serial.println(valor);
digitalWrite(pinV,HIGH); //Enciendo//
delay(pausa);            // Retardo de tiempo//
digitalWrite(pinV,LOW); //Apago//
delay(pausa);

parpadeo(pinV,1,pausa/30);
parpadeo(pinA,2,pausa/25);

digitalWrite(pinR,HIGH); //Enciendo//
delay(pausa);            // Retardo de tiempo//
digitalWrite(pinR,LOW); //Apago//
delay(pausa);

parpadeo(pinR,3,pausa/30);

}


//izquierda--GND derecha--5v centro--analog//

