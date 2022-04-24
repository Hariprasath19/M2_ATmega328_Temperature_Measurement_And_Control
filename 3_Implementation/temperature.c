#include "temp1.h"
#include "temp2.h"
#include "temp3.h"
#include "temp4.h"

int main(void)
{
	uint16_t temp;
	
	while(1)
	{
		if(temp1_LED()==1) //Check if both the switches are pressed
		{
			
			TurnLED_ON();//Turn LED ON
			temp=temp2_GetADC(); //Get the ADC value
			temp3_PWM(temp); //PWM output based on temperature
			temp4_USARTWrite(temp); //To Serial monitor to print Temperature
			

		}
		else  //in all other cases
		{
			TurnLED_OFF();//Turn LED OFF
			_delay_ms(200);
		}

	}
	return 0;
}
