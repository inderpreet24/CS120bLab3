/*	Author: ilaly001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char tempA = 0x00;
    unsigned char tempB = 0x00;
    unsigned char count = 0;
    unsigned char i = 0;
    unsigned char val1 = 0;
    unsigned char val2 = 0;
    /* Insert your solution below */
    while (1) {
 	tempA = PINA;
        tempB = PINB;
      count = 0;
	for ( i = 0; i < 8; ++i ) {
         val1 = ((tempA >> i ) & 0x01);
       if(val1 == 1) {
            count = count + 1;      
    }
      val2 = ((tempA >> i ) & 0x01);
       if(val2 == 1) {
       count = count + 1;
} 

}
 PORTC = count;

}
    return 1;
}
