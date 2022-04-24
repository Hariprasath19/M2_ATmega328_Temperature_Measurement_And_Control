#include "temp1.h"
#include "temp2.h"
#include "temp3.h"
#include "temp4.h"

int main(void)
{
	uint16_t fact;
	
	while(1)
	{
		if(temp1_LED()==1) //Check if both the switches are pressed
		{
			
			LED_ON();//Turn LED ON
			fact=temp2_GetADC(); //Get the ADC value
			temp3_PWM(fact); //PWM output based on temperature
			temp4_USARTWrite(fact); //To Serial monitor to print Temperature
			

		}
		else  //in all other cases
		{
			LED_OFF();//Turn LED OFF
			_delay_ms(200);
		}

	}
	return 0;
}
