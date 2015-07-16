int pinLedRojo=13;
int pinLedVerde=12;


void setup() 

{
pinMode(pinLedRojo,OUTPUT);
pinMode(pinLedVerde,OUTPUT);
Serial.begin(9600);
}


void loop()

{
//Guardamos en una variable el valor que leemos//  
int valor=analogRead(A0);

//Hacemos un if para que pase una cosa u otra//

  if(valor < 500)

       {
        //valor inferior a 500//    
        digitalWrite(pinLedVerde,HIGH);
        digitalWrite(pinLedRojo,LOW);
        Serial.println("valorbajo");
        }   

  else
       {
        digitalWrite(pinLedRojo,HIGH); 
        digitalWrite(pinLedVerde,LOW); 
        Serial.println("valorAlto");
        }

  delay(500);
}



