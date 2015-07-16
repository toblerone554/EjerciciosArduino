int pinLedRojo=13;
int pinLedVerde=12;
int pinLedAmarillo=11;

void setup() 

{
pinMode(pinLedRojo,OUTPUT);
pinMode(pinLedVerde,OUTPUT);
pinMode(pinLedAmarillo,OUTPUT);
Serial.begin(9600);
}


void loop()

{
//Guardamos en una variable el valor que leemos//  
int valor=analogRead(A1);
int umbral=analogRead(A0);

//Hacemos un if para que pase una cosa u otra//

  if(valor < umbral/2)

       {
        //valor inferior a 300//    
        digitalWrite(pinLedVerde,HIGH);
        digitalWrite(pinLedRojo,LOW);
        digitalWrite(pinLedAmarillo,LOW);
        Serial.println("valorbajo");
        }   

  else  if (valor>umbral)
       {
        digitalWrite(pinLedRojo,HIGH); 
        digitalWrite(pinLedVerde,LOW);
        digitalWrite(pinLedAmarillo,LOW); 
        Serial.println("valorAlto");
        }
  
  else 
         {
        digitalWrite(pinLedAmarillo,HIGH); 
        digitalWrite(pinLedVerde,LOW);
        digitalWrite(pinLedRojo,LOW); 
        Serial.println("valorMedio");
        }


  

  delay(500);
}



