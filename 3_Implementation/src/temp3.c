#include "temp3.h"
#include "temp2.h"

void InitTimer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void temp3_PWM(uint16_t fact)
{
    InitTimer();
    if(fact>=0 && fact<=200){
            OCR1A = PWM_20_PERCENT;
            _delay_ms(200);
        }
        else if(fact>=210 && fact<=500){
             OCR1A = PWM_40_PERCENT;
            _delay_ms(200);
        }
        else if(fact>=510 && fact<=700){
             OCR1A = PWM_70_PERCENT;
            _delay_ms(200);
        }
        else if(fact>=710 && fact<=1024){
             OCR1A = PWM_95_PERCENT;
            _delay_ms(200);
        }
        else{
            OCR1A=0;
            _delay_ms(200);
        }

}
