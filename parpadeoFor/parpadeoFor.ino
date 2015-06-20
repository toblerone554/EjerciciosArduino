int tiempo=10;
int led;


void setup()
{
  for (led=8;led<=12;led++)
  {
    pinMode(led,OUTPUT);
  }
}
void loop()
{
  for (led=8;led<=12;led++)
  
  {
  
   digitalWrite(led,HIGH);
   delay(tiempo);
   digitalWrite(led,LOW);
   delay(tiempo);
   
  }
}


