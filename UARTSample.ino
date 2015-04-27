/*Code for the Product 
* Smart DC Motor Controller Board 
****************************ELINT LABZ******************************
***************************www.elintlabz.in*************************
************************Created by SURYA SUNDAR RAJ D***************
*
*In this Sample Code, the Code is made for Controlling the DC Motor 
by the UART Serial Communication.
Rx Pin is Connected to the Tx of the Smart Dc Controller Board
Tx Pin is Connected to the Rx of the Smart Dc Controller Board
*
*/

//Initialize the Serial Baud
void setup()
{
Serial.begin(9600); 	//Setting 9600 as BAUD
}
char a[2];
void loop()
{
If(Serial.available>0) 			//wait for Serial Monitor 
{
a[i] = Serial.read();
delay(10);
Serial .write(a[i]);			//Send the Command
i++;
}
//Clear the array
for(i = 0;i<2;i++)
{
    a[i] = "  ";
}
}

//End of the Program
