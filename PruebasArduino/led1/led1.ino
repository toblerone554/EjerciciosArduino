//Vamos a encender un led//

int led=13; //Defino variable global para usarla por todo el codigo//
int tiempo=50; //Defino variable tiempo para usarla por todo el codigo//


void setup() {

 //Vamos a poner que es una salida del pin 13// 

pinMode(led,OUTPUT);

}

void loop() {
  
  // Vamos a usar las patillas digitales, escribiendo un valor en una patilla digital//

  //Vamos a ponerle tiempo para que apague y encienda//

digitalWrite(led,HIGH); //Enciendo//
delay(tiempo);            // Retardo de tiempo//
digitalWrite(led,LOW); //Apago//
delay(tiempo);

}
