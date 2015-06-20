int tiempo=50;
int led;

void setup()

  {
    for(led=8;led<=13;led++)
    {
    
      pinMode(led,OUTPUT);
      
    }

  }
  
void secuencia_uno()

  {

    for (led=8; led<=13; led++)
    {
    
      digitalWrite(led,HIGH);
      delay(tiempo);
      digitalWrite(led,LOW);
      delay(tiempo);
    }


  }
  
  
void secuencia_dos()

  {

    for (led=13; led>=8; led--)
    {
    
      digitalWrite(led,HIGH);
      delay(tiempo);
      digitalWrite(led,LOW);
      delay(tiempo);
    }


  }
  

void loop()

{
  secuencia_uno();
  secuencia_dos();


}
