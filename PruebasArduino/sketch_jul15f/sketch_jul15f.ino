#define PAUSA 100


void setup() 

{
  DDRB=B00111111;

  DDRD=B11110000;

}

void loop() 

{

    int valor=B10000000;
    
//Los enteros tiene 2 bytes o 16 bits//

  for(int i=0;i<10;i++) 

  {

    int parteAltaValor=valor/256; //El cociente//
    int parteBajaValor=valor%256; //El resto //

    PORTD=parteBajaValor;
    PORTB=parteAltaValor;

    delay(PAUSA);
    valor=valor<<1;
  } 









}
