#define PAUSA 100

void setup() 

  {
    DDRB=B00111111;
  }

void loop() 

  { 
   PORTB=B00000001;

/*
//  ASI LO PODEMOS HACER MAS SENCILLO, MULTIPLICANDO POR 2  //

    for(int i=0;i<6;i++)
  
        {
          delay(100);
          PORTB=PORTB*2;
        }

    for(int i=0;i<6;i++)
  
        {
          PORTB=PORTB/2;
          delay(100);
        }

        
*/

   
  PORTB=B00000001;
  delay(100);
  PORTB=B00000010;
  delay(100);
  PORTB=B00000100;
  delay(100);
  PORTB=B00001000;
  delay(100);
  PORTB=B00010000;
  delay(100);
  PORTB=B00100000;
  delay(100);
  PORTB=B01000000;
  delay(100);
  PORTB=B10000000;
  delay(100);

  PORTB=B10000000;
  delay(100);
  PORTB=B01000000;
  delay(100);
  PORTB=B00100000;
  delay(100);
  PORTB=B00010000;
  delay(100);
  PORTB=B00001000;
  delay(100);
  PORTB=B00000100;
  delay(100);
  PORTB=B00000010;
  delay(100);
  PORTB=B00000001;
  delay(100);



  
}
