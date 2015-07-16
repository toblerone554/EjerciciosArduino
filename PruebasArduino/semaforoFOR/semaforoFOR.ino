//Vamos a encender un semaforo//

//Definimos tres variables para que cada color de cada led//

int ledR=11; //Defino variable global para usarla por todo el codigo//
int ledV=12; //Defino variable global para usarla por todo el codigo//
int ledA=13; //Defino variable global para usarla por todo el codigo//
int tiempo=500; //Defino variable tiempo para usarla por todo el codigo//


void setup() {

 //Vamos a poner que es una salida de cada pin// 

pinMode(ledA,OUTPUT);
pinMode(ledR,OUTPUT);
pinMode(ledV,OUTPUT);

}

void parpadeo(int ledParpadeo, int nParpadeo, int pausaParpadeo)

{
  for(int i=0;i<10;i++)

  {
    digitalWrite(ledParpadeo,HIGH);
    delay(tiempo);
    digitalWrite(ledParpadeo,LOW);
    delay(tiempo);
    
    }  
  
  }
void loop() {

    digitalWrite(ledV,HIGH);
    delay(tiempo);
    digitalWrite(ledV,LOW);
    delay(tiempo);

parpadeo(ledR,2,2);




parpadeo(ledA,13,45);
  
  digitalWrite(ledR,HIGH);
    delay(tiempo);
    digitalWrite(ledR,LOW);
    delay(tiempo);

//parpadeo(ledR,13,45);//

}
