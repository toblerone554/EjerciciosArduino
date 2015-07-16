//Vamos a encender un semaforo//

//Definimos tres variables para que cada color de cada led//

int ledR=13; //Defino variable global para usarla por todo el codigo//
int ledV=12; //Defino variable global para usarla por todo el codigo//
int ledA=11; //Defino variable global para usarla por todo el codigo//
int tiempo=500; //Defino variable tiempo para usarla por todo el codigo//


void setup() {

 //Vamos a poner que es una salida de cada pin// 

pinMode(ledA,OUTPUT);
pinMode(ledR,OUTPUT);
pinMode(ledV,OUTPUT);

}

void loop() {
  
  // Vamos a usar las patillas digitales, escribiendo un valor en una patilla digital//

  //Vamos a ponerle tiempo para que apague y encienda//

digitalWrite(ledR,HIGH); //Enciendo//
delay(tiempo);            // Retardo de tiempo//
digitalWrite(ledR,LOW); //Apago//
delay(tiempo);


digitalWrite(ledA,HIGH); //Enciendo//
delay(tiempo);            // Retardo de tiempo//
digitalWrite(ledA,LOW); //Apago//
delay(tiempo);


digitalWrite(ledV,HIGH); //Enciendo//
delay(tiempo);            // Retardo de tiempo//
digitalWrite(ledV,LOW); //Apago//
delay(tiempo);

}
