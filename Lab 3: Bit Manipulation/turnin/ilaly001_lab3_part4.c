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
    DDRB = 0xFF; PORTB = 0x00;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char tempA = 0x00;
    unsigned char tempB = 0x00;
    unsigned char tempC = 0x00;
    unsigned char count = 0;
    unsigned char i = 0;
    unsigned char val1 = 0;
    unsigned char val2 = 0;
    /* Insert your solution below */
    while (1) {
 	tempA = PINA;
        tempB = (tempA >> 4) & 0x0F;
       tempC = (tempA << 4 ) & 0xF0;
       PORTB = tempB;
      PORTC = tempC;
}

    return 1;
}
