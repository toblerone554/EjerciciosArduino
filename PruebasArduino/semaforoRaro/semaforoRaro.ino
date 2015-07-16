int pinPulsador=3;
int pinRojo=9;
int pinVerde=8;
int pinAmarillo=11;

void setup() {

  pinMode(pinPulsador,INPUT);
  pinMode(pinRojo,OUTPUT);
  pinMode(pinVerde,OUTPUT);
  pinMode(pinAmarillo,OUTPUT);
  
}

void loop() {

  int valorPulsador=digitalRead(pinPulsador);

  if (valorPulsador==HIGH)

    {
        digitalWrite(pinVerde,HIGH);
        digitalWrite(pinRojo,LOW);   
        delay(500);
    
    }
  
   if
  
    {
        digitalWrite(pinRojo,HIGH);
        digitalWrite(pinVerde,LOW);   
            
    }

  else
  
    {
        digitalWrite(pinAmarillo,HIGH);
        digitalWrite(pinVerde,LOW);   
            
    }
  

  


}
