//EJEMPLO DE PUERTOS//


void setup() 

{
   
  DDRB=B00111111; // SIN LA "B" (BINARIO),SE PUEDE PONER EN DECIMAL(63)//

 
}

void loop() 

{

  PORTB=B00101010;
  delay(50);
  PORTB=B00101010;
  delay(50);

}
