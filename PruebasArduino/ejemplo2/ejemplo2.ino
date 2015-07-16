int ledPin=9;
void setup() {}
int MaxValor=100;
int pausa=20;

void loop() {

  for (int i=0;i<=MaxValor;i++)

      {
        analogWrite(ledPin,i);
        delay(pausa);
      
      }

  for (int i=0;i>=MaxValor;i--)

      {
        analogWrite(ledPin,i);
        delay(pausa);
      
      }



}
