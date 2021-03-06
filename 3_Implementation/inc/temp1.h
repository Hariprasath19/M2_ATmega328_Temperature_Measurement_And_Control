#ifndef __TEMP_1_H__
#define __TEMP_1_H__

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD2)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */
 
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */
void LED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void LED_OFF();

/**
 * @brief TEMP 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int temp1_LED(void);

#endif /* __TEMP_1_H__ */
