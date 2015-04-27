/*Library for the Product 
* Smart DC Motor Controller Board 
****************************ELINT LABZ******************************
***************************www.elintlabz.in*************************
************************Created by SURYA SUNDAR RAJ D***************
*
*This is the Header File for the DC Motor Library
*
*/
//Defining the Header File 
#ifndef DCMOTOR_h
#define DCMOTOR_h

//Import the Library Required 
#include "Arduino.h"

class DCMOTOR
{
public:

//Initialize the Pins Required 
DCMOTOR(int, int , int , int);

// Prototype for all the Functions Performed by the DC Motor
void m1off();
void m1frwd();
void m1bcwd();
void m1slowf();
void m1slowb();
void m1slow1f();
void m1slow1b();
void m1slow2f();
void m1slow2b();
void m2off();
void m2frwd();
void m2bcwd();
void m2slowf();
void m2slowb();
void m2slow1f();
void m2slow1b();
void m2slow2f();
void m2slow2b();

private:

int _A;
int _B;
int _C;
int _D;

};

#endif
