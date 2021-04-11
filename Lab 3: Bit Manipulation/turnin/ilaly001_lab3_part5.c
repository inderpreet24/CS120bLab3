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
    DDRA = 0x000; PORTA = 0xFFF;
    DDRB = 0xFE; PORTB = 0x00;
    DDRC = 0xFF; PORTC = 0x00;
    DDRD = 0x00; PORTD = 0xFF;
    unsigned char tempA = 0x00;
    unsigned char tempB = 0x00;
    unsigned char tempD = 0x00;
    unsigned char count = 0;
    unsigned char i = 0;
    unsigned char finalVal1 = 0;
    unsigned short totalVal2 = 0x0000;
    /* Insert your solution below */
    while (1) {
 	tempD = PIND;
        tempB = PINB * 0x01; 
  	totalVal2 = totalVal2 << 1;
     totalVal2 = totalVal2 + tempB;
	if(totalVal2 >= 70) {
      tempB = 0x02;         
}
      else if((totalVal2 > 5) && (totalVal2 < 70)){
       tempB = 0x04;
}
        else {
      tempB =  0x00;
}
   PORTB = tempB;
}
    return 1;
}
