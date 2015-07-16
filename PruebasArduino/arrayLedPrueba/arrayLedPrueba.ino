int leds[]={4,5,6,7,8,9,10,11,12,13,14};

//Otra forma de Array//

/*
int led2[];

  led2=[0]=4;
  led2=[1]=5;
  ...........
  led2=[10]=14;
*/

void setup() 

  

{   
  Serial.begin(9600);
  
  //sizeof calcula el tamaño del array//
    for(int i=0;i<sizeof(leds);i++)
    
      { 
        Serial.print(i);
        Serial.print(",");
        Serial.println(leds[i]);
        pinMode(leds[i],OUTPUT); 
       
       }


}

void loop() 

{

    //Ponemos sizeof(int)/ con el fin de saber el tamaño en bits//

    for(int i=0;i<sizeof(leds)/sizeof(int);i++)
      
      {
        digitalWrite(leds[i],HIGH);
        delay(50);
        digitalWrite(leds[i],LOW);
        delay(50);
      }


    for(int i=sizeof(leds)/sizeof(int)-1;i>0;i--)
      
      {
        digitalWrite(leds[i],HIGH);
        delay(50);
        digitalWrite(leds[i],LOW);
        delay(50);
      }



}
