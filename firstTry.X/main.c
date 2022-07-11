/******************************************************************************/
/*  Files to Include                                                          */
/******************************************************************************/
#ifdef FREERTOS_CONFIG_H
#endif
//"C:\Program Files\Microchip\xc32\v4.10\pic32mx\include\lega-c\plib.h"
#ifdef __XC32
    #include <xc.h>          /* Defines special funciton registers, CP0 regs  */
#endif

#include <stdio.h>
//#include <plib.h>            /* Include to use PIC32 peripheral libraries      */
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

// #define _XTAL_FREQ 20000000 //define crystal frequency to 20MHz
/*
void int main(void) 
{
int TRISRC0=0; //set RC0 pin as a digital output pin
while(1)
{
   RC0 = 1;                  // set RC0 pin to logic High &  turn on 
   __delay_ms(1000);  //add delay of 1 second 
   RC0 = 0;                  // set RC0 pin to logic low & turn off
  __delay_ms(1000);  //add delay of 1 second

}
return;
}
*/

#define LEDS_ON_OFF 0x55
#define LEDS_OFF_ON 0xAA
void delay (void)
{
 int n = 50000;
 while(n>0) {n--;}
}
int main(void) {
    
// Port A access
    TRISA = 0x0000;
    //TRISAbits.TRISA1 = LEDS_ON_OFF; // tristate A, set all port bits to be output
    //LATA = LEDS_ON_OFF; // latch A, write to port latch
    //LATAbits.LATA1 = LEDS_OFF_ON;
    while(1) {
     LATA = LEDS_ON_OFF; // write to port latch
     // delay value change
     delay();
     LATA = LEDS_OFF_ON; // write to port latch
     // delay value change
     delay();
     }
     return -1;
}

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