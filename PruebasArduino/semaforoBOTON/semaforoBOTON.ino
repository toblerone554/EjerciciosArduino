int pinPulsador=3;
int pinRojo=9;
int pinVerde=8;

void setup() {

  pinMode(pinPulsador,INPUT);
  pinMode(pinRojo,OUTPUT);
  pinMode(pinVerde,OUTPUT);
  
}

void loop() {

  int valorPulsador=digitalRead(pinPulsador);

  if (valorPulsador==HIGH)

    {
        digitalWrite(pinVerde,HIGH);
        digitalWrite(pinRojo,LOW);   
        delay(500);
    
    }
  
  else
  
    {
        digitalWrite(pinRojo,HIGH);
        digitalWrite(pinVerde,LOW);   
            
    }
  


}
