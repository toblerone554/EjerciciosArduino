int pinRed=11;
int pinBlue=10;
int pinGreen=9;

int pinARed=A0;
int pinABlue=A1;
int pinAGreen=A2;

void setup() {

 Serial.begin(9600);

}

void loop() {

  int PotR=analogRead(pinARed);
  int PotG=analogRead(pinAGreen);
  int PotB=analogRead(pinABlue);

  int valorRed=map(PotR,0,1023,0,255);
  int valorGreen=map(PotG,0,1023,0,255);
  int valorBlue=map(PotB,0,1023,0,255);
  

  analogWrite(pinRed,valorRed);
  analogWrite(pinGreen,valorGreen);
  analogWrite(pinBlue,valorBlue);


  Serial.print(valorRed);
  Serial.print(",");
  
  Serial.print(valorGreen);
  Serial.print(",");

  Serial.print(valorBlue);
  Serial.print(",");
 
  delay(100);

}
