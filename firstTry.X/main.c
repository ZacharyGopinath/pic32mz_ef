/******************************************************************************/
/*  Files to Include                                                          */
/******************************************************************************/
#define <FREERTOS_CONFIG_H>

#ifdef __XC32
    #include <xc.h>          /* Defines special funciton registers, CP0 regs  */
#endif

#include <stdio.h>
#include <plib.h>            /* Include to use PIC32 peripheral libraries      */
#include <stdint.h>          /* For uint32_t definition                        */
#include <stdbool.h>         /* For true/false definition                      */
#include <sys/attribs.h>     /* For __ISR definition                          */
#include "../src/system.h"   /* System funct/params, like osc/periph config    */
#include "../src/user.h"     /* User funct/params, such as InitApp             */

/******************************************************************************/
/* Global Variable Declaration                                                */
/******************************************************************************/

/* i.e. uint32_t <variable_name>; */

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/
#define LEDS_ON_OFF 0x55
int main(void) {
// Port A access
TRISA = 0x0000; // set all port bits to be output
LATA = LEDS_ON_OFF; // write to port latch

return
/*
void melis (unsigned int time){
    unsigned int i;                                         // number of milliseconds requested
    unsigned int del1;                                      // count for 1 millisecond
    
    for (i = 0; i < time; i++){                             // millisecond loop
        for (del1 = 0; del1 < 4440; del1++);                // trial and error adjust second parameter to give approximately 1 millisecond
    }
}

int main(){

    TRISA = 0;                                              // all output
    TRISB = 0;                                              // all output
    TRISC = 0;                                              // all output

    ANSELA = 0;                                             // all digital
    ANSELB = 0;                                             // all digital
    ANSELC = 0;                                             // all digital

    LATA = 0;                                               // Set PORTA to zero
    LATB = 0;                                               // Set PORTB to zero
    LATC = 0;                                               // Set PORTC to zero
    while(1){
        melis (500);                                        // number of milliseconds delay - allow time for eye to see LED flash

        LATA = ~LATA;                                       // Invert PORTA value
        LATB = ~LATB;                                       // Invert PORTB value
        LATC = ~LATC;                                       // Invert PORTC value
    }
}
*/