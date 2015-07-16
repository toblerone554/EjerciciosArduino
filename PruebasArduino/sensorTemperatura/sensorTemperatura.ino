#include <DHT.h>

#define DHTTYPE DHT11

int primerled=4;
int ultimoled=13;
int pinDHT=2;

DHT dht(pinDHT, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");

  dht.begin();
}





void loop() {

   float t = dht.readTemperature();

if (isnan(t)) {
    Serial.println("Error leyendo del DHT sensor!");
    return;
  }

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" *C ");


}
