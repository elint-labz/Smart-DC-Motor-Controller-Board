/*Sample Code for the Product 
* Smart DC Motor Controller Board 
****************************ELINT LABZ******************************
***************************www.elintlabz.in*************************
************************Created by SURYA SUNDAR RAJ D***************
*
*In this Sample Code, the Code is made for Controlling the DC Motor 
by the I2C Serial Communication.
SDA Pin is Connected to the SDA of the Smart Dc Controller Board
SCL Pin is Connected to the SCL of the Smart Dc Controller Board
*
*/

//Import the Library
#include <Wire.h>

//Declare the Char variable stores the command
char b[2];

//Initialize the Serial Monitor and Wire Libarary
void setup()
{
  Wire.begin();
  Serial.begin(9600);    //Setting the Baud as 9600
}

//Sending the Commands through the I2C Commmunitcaiotn 
void loop()
{
  //wait for the Serial Monitor 
  if(Serial.available())
  {
    Wire.beginTransmission(4); //Begin the I2C communication on address 4
    for(int i; i< 2;i++)
    {
     b[i] = Serial.read(); 
     delay(100);
     Wire.write(b[i]);         //Send the command
    }
    Wire.endTransmission();    //End the Communication
  }
}

//End of the Program
