#include "temp4.h"

void USARTInit()
{
    UBRR0H = (uint8_t)(UBRR_VALUE>>8);
    UBRR0L = (uint8_t)UBRR_VALUE;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

int USARTRead()
{
    while(!(UCSR0A &(1<<RXC0)))
    {
        //Do nothing
    }
    return UDR0;
}

void temp4_USARTWrite(uint16_t fact)
{ 
    int j=0;
        if(fact>=0 && fact<=200){
            unsigned char data1[]="Temperature: 20 degree C\n";
            j=0;
            while(data1[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data1[j];        // Put data into buffer, sends the data
            j++;
            }
            _delay_ms(2000);
        }
        else if(fact>=210 && fact<=500){
            unsigned char data2[]="Temperature: 25 degree C\n";
            j=0;
            while(data2[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data2[j];        // Put data into buffer, sends the data
            j++;
            }
            _delay_ms(2000);
        }
        else if(fact>=510 && fact<=700){        
             unsigned char data3[]="Temperature: 29 degree C\n";
            j=0;
            while(data3[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data3[j];        // Put data into buffer, sends the data
            j++;
            }
            _delay_ms(2000);
        }
        else if(fact>=710 && fact<=1024){         
            unsigned char data4[]="Temperature: 33 degree C\n";     
            j=0;
            while(data4[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data4[j];        // Put data into buffer, sends the data
            j++;
            }
            _delay_ms(2000);
        }
        else{
              unsigned char data5[]="Temperature: 0 degree C\n";
            j=0;
            while(data5[j]!=0){
            while (!( UCSR0A & (1<<UDRE0)));  // Wait for empty transmit buffer
            UDR0 = data5[j];        // Put data into buffer, sends the data
            j++;
            }
            _delay_ms(2000);
            
        }
}
