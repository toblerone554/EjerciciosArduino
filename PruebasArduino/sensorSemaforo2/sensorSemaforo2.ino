#include <DHT.h>

#define DHTTYPE DHT11

int primerled = 4;
int ultimoled = 13;
int pinDHT = 2;

int tMin=20;
int tMax=42;

DHT dht(pinDHT, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("DHTxx test!");
  dht.begin();

  for (int pin = primerled; pin <= ultimoled; pin++)

  {
    pinMode(pin, OUTPUT);
  }

}





void loop() {

  float t = dht.readTemperature();

  if (isnan(t)) {
    Serial.println("Error leyendo del DHT sensor!");
    return;
  }

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print("Temperatura(int) ");
  Serial.println("OFU QUE CALO");
  int tInt=(int)t;
  Serial.print(tInt);
  Serial.println(" *C ");

    int ultimoLedEncendido=map(t,tMin,tMax,primerled,ultimoled);

    for (int pin = primerled; pin <= ultimoled; pin++)

  {
    if(pin<=ultimoLedEncendido)
    {digitalWrite(pin,HIGH);}
    else
    {digitalWrite(pin,LOW);}
  }



  delay(500);
}
