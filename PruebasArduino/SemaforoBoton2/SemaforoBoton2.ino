int pinPulsador=3;
int pinRojo=9;
int pinVerde=8;

void setup() {

  pinMode(pinPulsador,INPUT);
  pinMode(pinRojo,OUTPUT);
  pinMode(pinVerde,OUTPUT);
  Serial.begin(9600);
}

  long ultimoTiempo=millis();

void loop() {

  int valorPulsador=digitalRead(pinPulsador);

  if (valorPulsador==HIGH)

    {
        long nuevoTiempo=millis();
        Serial.println(nuevoTiempo-ultimoTiempo);
        Serial.println(" ms");
        ultimoTiempo=nuevoTiempo;
        digitalWrite(pinVerde,HIGH);
        digitalWrite(pinRojo,LOW);   
        delay(1000);
    
    }
  
  else
  
    {
        digitalWrite(pinRojo,HIGH);
        digitalWrite(pinVerde,LOW);   
            
    }
  


}
