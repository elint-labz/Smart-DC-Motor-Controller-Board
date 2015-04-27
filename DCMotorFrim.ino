/*Frimware for the Product 
* Smart DC Motor Controller Board 
****************************ELINT LABZ******************************
***************************www.elintlabz.in*************************
************************Created by SURYA SUNDAR RAJ D***************
*
*Initially copy the Libraries to the Library Folder of the Arduino.
Once that is done Upload this Firmware to the IC and Put it on the 
Smart DC Motor Controller Board and Work on It.
*
*/

//Import the Library Required
#include <DCMOTOR.h>
#include <Wire.h>

DCMOTOR dcmotor(3,5,6,9);

//Initialize the Setup 
void setup()
{
  Wire.begin(4);                          //Begin the I2C Communication with Address 4
  Wire.onReceive(receiveEvent);      
  Serial.begin(9600);                     //Begin the Serial Communication with Baud 9600
}

//Initialize a Array that Store the Commands 
char a[2]; 
int i,b;
void loop()
{
  delay(100);
  //Wait for Serail Commands to receive 
  if (Serial.available())
  {
    for (int i = 0; i<2 ; i++)
    {
     a[i] = Serial.read();        //Read the Serial Command and stor in the Array
    }
     make();
  }

}

//Convert the Char to Int
void make()
{
  a[0] = a[0] - '0';
  a[1] = a[1] - '0';
  b = (a[0] * 10) + a[1] ;
  process();
 
}

//Convert the Command to the Function to Play
void process()
{
  Serial.print(b);
  switch(b)
  {
    case 10:
    dcmotor.m1off();
    break;
    case 11:
    dcmotor.m1frwd();
    break;
    case 12:
    dcmotor.m1bcwd();
    break;
    case 13:
    dcmotor.m1slowf();
    break;
    case 14:
    dcmotor.m1slowb();
    break;
    case 15:
    dcmotor.m1slow1f();
    break;
    case 16:
    dcmotor.m1slow1b();
    break;
    case 17:
    dcmotor.m1slow2f();
    break;
    case 18:
    dcmotor.m1slow2b();
    break;
    case 20:
    dcmotor.m2off();
    break;
    case 21:
    dcmotor.m2frwd();
    break;
    case 22:
    dcmotor.m2bcwd();
    break;
    case 23:
    dcmotor.m2slowf();
    break;
    case 24:
    dcmotor.m2slowb();
    break;
    case 25:
    dcmotor.m2slow1f();
    break;
    case 26:
    dcmotor.m2slow1b();
    break;
    case 27:
    dcmotor.m2slow2f();
    break;
    case 28:
    dcmotor.m2slow2b();
    break;
  }
  cleaR();
}

int k,l;

//Receive the Commands through the I2C
void receiveEvent(int howMany)
{ 
  for(int i; i< 2;i++)
   {
    delay(100);
     c[i] = Wire.read(); 
   }
    k = c[0] ;
    k = k - '0';
    l = c[1];
    l = l - '0';
    b = k*10 + l;  
    process();
}

//Clear the Array at End of the Process
void cleaR()
{
 for(int i; i< 2;i++)
   {
    delay(100);
     c[i] = ' '; 
     a[i] = ' ';
   } 
} 

//End of the Program
