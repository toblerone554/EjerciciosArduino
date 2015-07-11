//Ejercicio con un array y con un contador para recorrer el array//

int leds[5]={8,9,10,11,12};
int tiempo=100;
int led=0;

void setup()
{
  for(led=0;led<=4;led++)
  
  {
     pinMode (leds[led],OUTPUT);
  
  }


}

void loop()

{

  for(led=0;led<=4;led++)
 {
  
  
   digitalWrite(leds[led],HIGH);
   delay(tiempo);
   digitalWrite(leds[led],LOW);
   delay(tiempo);

 }


  for(int led=4;led>=0;led--)
 {
  
  
   digitalWrite(leds[led],HIGH);
   delay(tiempo);
   digitalWrite(leds[led],LOW);
   delay(tiempo);

 }




}
