/*Library for the Product 
* Smart DC Motor Controller Board 
****************************ELINT LABZ******************************
***************************www.elintlabz.in*************************
************************Created by SURYA SUNDAR RAJ D***************
*
*This is the Library for the Smart DC Motor Controller Board
Place this File in the Library of the Arduino and Upload the Firmware.
*
*/

//Import the Library and Header File
#include "Arduino.h"
#include "DCMOTOR.h"

//Initialize the Pins Used
DCMOTOR::DCMOTOR(int A, int B, int C, int D)
{
_A = A;
_B = B;
_C = C;
_D = D;
pinMode(_A, OUTPUT);
pinMode(_B, OUTPUT);
pinMode(_C, OUTPUT);
pinMode(_D, OUTPUT);
}

//Define the Function Prototyped
void DCMOTOR::m1off()
{
digitalWrite(_A,LOW);
digitalWrite(_B,LOW);
}

void DCMOTOR::m1frwd()
{
digitalWrite(_A,HIGH);
digitalWrite(_B,LOW);
}

void DCMOTOR::m1bcwd()
{
digitalWrite(_A,LOW);
digitalWrite(_B,HIGH);
}

void DCMOTOR::m1slowf()
{
 digitalWrite(_B,LOW);
 for(int i = 170 ; i<=195 ; i++)
 {
  analogWrite(_A,i);
 }
}

void DCMOTOR::m1slowb()
{
 digitalWrite(_A,LOW);
 for(int i = 170 ; i<=195 ; i++)
 {
  analogWrite(_B,i);
 }
}

void DCMOTOR::m1slow1f()
{
 digitalWrite(_B,LOW);
 for(int i = 130 ; i<=155 ; i++)
 {
  analogWrite(_A,i);
 }
}

void DCMOTOR::m1slow1b()
{
 digitalWrite(_A,LOW);
 for(int i = 130 ; i<=155 ; i++)
 {
  analogWrite(_B,i);
 }
}

void DCMOTOR::m1slow2f()
{
 digitalWrite(_B,LOW);
 for(int i = 75 ; i<=100 ; i++)
 {
  analogWrite(_A,i);
 }
}

void DCMOTOR::m1slow2b()
{
 digitalWrite(_A,LOW);
 for(int i = 75 ; i<=100 ; i++)
 {
  analogWrite(_B,i);
 }
}

void DCMOTOR::m2off()
{
digitalWrite(_C,LOW);
digitalWrite(_D,LOW);
}

void DCMOTOR::m2frwd()
{
digitalWrite(_C,HIGH);
digitalWrite(_D,LOW);
}

void DCMOTOR::m2bcwd()
{
digitalWrite(_C,LOW);
digitalWrite(_D,HIGH);
}

void DCMOTOR::m2slowf()
{
 digitalWrite(_D,LOW);
 for(int i = 170 ; i<=195 ; i++)
 {
  analogWrite(_C,i);
 }
}

void DCMOTOR::m2slowb()
{
 digitalWrite(_C,LOW);
 for(int i = 170 ; i<=195 ; i++)
 {
  analogWrite(_D,i);
 }
}

void DCMOTOR::m2slow1f()
{
 digitalWrite(_D,LOW);
 for(int i = 130 ; i<=155 ; i++)
 {
  analogWrite(_C,i);
 }
}

void DCMOTOR::m2slow1b()
{
 digitalWrite(_C,LOW);
 for(int i = 130 ; i<=155 ; i++)
 {
  analogWrite(_D,i);
 }
}

void DCMOTOR::m2slow2f()
{
 digitalWrite(_D,LOW);
 for(int i = 75 ; i<=100 ; i++)
 {
  analogWrite(_C,i);
 }
}

void DCMOTOR::m2slow2b()
{
 digitalWrite(_C,LOW);
 for(int i = 75 ; i<=100 ; i++)
 {
  analogWrite(_D,i);
 }
}

//End of the Library
