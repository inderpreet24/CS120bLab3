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
    unsigned char tempC= 0x00;
    unsigned char i = 0;
    unsigned char val1 = 0;
    unsigned char val2 = 0;
    /* Insert your solution below */
    while (1) {
	 tempA= PINA & 0x0F;
        tempC = 0x00;
      if(tempA == 0x01 || tempA == 0x10) {
        tempC= 0x20;
	}
     else if(tempA == 0x03 || tempA == 0x04) {
       tempC= 0x30;
    }
    else if (tempA == 0x05 || tempA == 0x06) {
      tempC= 0x38;
    }
    else if (tempA == 0x07 || tempA == 0x08 || tempA ==0x09) {
       
       tempC = 0x3C;
     }
    else if (tempA == 0x0A || tempA == 0x0B || tempA == 0x0C){
     tempC  = 0x3E;
     } 
     else if (tempA == 0x0D || tempA == 0x0E || tempA == 0x0F){
      tempC = 0x3F;
}
     if(tempA <= 4 ) {
      tempC = tempC | 0x40;
     }
    tempA = tempA & 0x70;
    if(tempA = 0x30){
         tempC = tempC | 0x80;
     }
 PORTC = tempC;
}
    return 1;
}
