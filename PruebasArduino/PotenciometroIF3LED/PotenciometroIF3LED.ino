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
int valor=analogRead(A0);

//Hacemos un if para que pase una cosa u otra//

  if(valor < 300)

       {
        //valor inferior a 300//    
        digitalWrite(pinLedVerde,HIGH);
        digitalWrite(pinLedRojo,LOW);
        digitalWrite(pinLedAmarillo,LOW);
        Serial.println("valorbajo");
        }   

  else  if (valor < 1000)
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



