#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h>

#include "../headers/DHT22.h"


#define READ_INTERVAL 2000 //read interval is less than (2S) two seconds
#define CE1 11
#define POINT1 27
#define POINT2 43

#include <string>
using namespace std;

int main()
{
  std::string sName = "dht22";
  DHT22 name(14, sName);
  wiringPiSetup();
  printf("Hello World!\n");

 /*START OF SEND AND RECEIVE SIGNAL*/ 
  //set pin to output
  pinMode(CE1,OUTPUT);
  digitalWrite(CE1, HIGH);
  
  //bring vcc to 0 for 1ms minimum (1~10ms)
  digitalWrite(CE1, LOW);  
  delay(1);
  
  //bring vcc to 1 
  digitalWrite(CE1, HIGH);
  //wait 20-40us
  delayMicroseconds(30);

  //set CE1 for input
  pinMode(CE1,INPUT);

  /*If success AM2302 should make SDA LOW for 80us as response signal*/
  delayMicroseconds(80);
  int nRead1 = digitalRead(CE1);
  printf("Read1 value : %d\n", nRead1);

  /*Then AM2302 pulls SDA HIGH for 80us to prepare to send data*/
  delayMicroseconds(80);
  int nRead2 = digitalRead(CE1); 
  printf("Read2 value : %d\n", nRead2);

 /*START READING 40-BIT DATA*/ 
   if(nRead2 == 1)
  {
   int nSample1, nSample2;
   for(int nBit = 1; nBit <= 40; nBit++)
   {
     //every bit transmition begins with low-voltage-level that last 50us
     delayMicroseconds(50);  

     //the following high-voltage-level signals length decide bit is '1' or '0'
     
     //26~28us = '0'
     //~70us = '1'
    
     nSample1 = digitalRead(CE1);     //sample at start of transmit
     delayMicroseconds(POINT1);       //delay 27 us

     nSample2 = digitalRead(CE1);     //if sample 2 is HIGH then bit data is '0'
     printf("Bit  #%d start of transmision: --> %d \n", nBit, nSample1);
     if(nSample2 == 1)
     {
       printf("Bit #%d at 27us  : --> %d\n", nBit, nSample2);
     }

     if(nSample2 == 0)
     {
       delayMicroseconds(POINT2); //delay 43 us
       nSample2 = digitalRead(CE1);
       printf("Bit #%d at 70us  : --> %d\n", nBit, nSample2);
     }
/*
     int nResult = 999;
     if(nSample2 == 1)
     {//if reading at POINT1 and POINT2 == 1 then bit is '1'
       nResult = 1;
     }
     else if(nSample1 == 0 )
     {//if reading at POINT1 == 0 then bit is '0'
       nResult = 0;
     }

     printf("Bit result %d ---> %d\n", nBit, nResult);
*/     
   }  

  }
pinMode(CE1, OUTPUT);
digitalWrite(CE1, LOW);
  /*NOTE: If signal is always high-voltage-level, it means AM2302 is nor working properly*/
   
  return 0;
}
