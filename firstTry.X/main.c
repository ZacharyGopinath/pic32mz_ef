/******************************************************************************/
/*  Files to Include                                                          */
/******************************************************************************/
#ifdef FREERTOS_CONFIG_H
#endif
// "C:\Program Files\Microchip\xc32\v4.10\pic32mx\include\lega-c\plib.h"
// address of plib header file
#ifdef __XC32
    #include <xc.h>          /* Defines special funciton registers, CP0 regs  */
#endif

#include <stdio.h>
#include <time.h>

//#include <plib.h>            /* Include to use PIC32 peripheral libraries      */
// plib is legacy peripheral libraries, did not come installed, 
// did not include and seems to be fine
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
#include <xc.h>
#include<stdlib.h>
/*
void delay (void)
{
 //int n = 50000000000;
 //while(n > 0) {n--;} // decrementing n adds short gap when delay invoked
    for(int i = 2500; i > 0; i--);
}*/

//void delay(int milliseconds)
//{
//    long pause;
//    clock_t now,then;
//
//    pause = milliseconds*(CLOCKS_PER_SEC/1000);
//    now = then = clock();
//    while( (now-then) < pause )
//        now = clock();
//}
#define _XTAL_FREQ 32000000 
#define _PLIB_OSC_H

void delay (void){
    for (int i = 50000; i > 0; i--){};
};

int main(void) {
    //oscCurrent = PLIB_OSC_CurrentSysClockGet(OSC_ID_0);
    //OSC_SYS_TYPE oscCurrent;
    //TRISE = 0; // works for RE0
    TRISEbits.TRISE0 = 0;
    TRISEbits.TRISE1 = 0;
    TRISEbits.TRISE2 = 0;
    TRISEbits.TRISE3 = 0;
    TRISEbits.TRISE4 = 0;
    TRISEbits.TRISE5 = 0;
    TRISEbits.TRISE6 = 0;
    TRISEbits.TRISE7 = 0;
    
    LATEbits.LATE0 = 0;
    
    while (1){
        delay();
        LATEbits.LATE0 = !LATEbits.LATE0;
        delay();
        LATEbits.LATE1 = !LATEbits.LATE1;
        delay();
        LATEbits.LATE2 = !LATEbits.LATE2;
        delay();
        LATEbits.LATE3 = !LATEbits.LATE3;
        delay();
        LATEbits.LATE4 = !LATEbits.LATE4;
        delay();
        LATEbits.LATE5 = !LATEbits.LATE5;
        delay();
        LATEbits.LATE7 = !LATEbits.LATE7;
        delay();
        LATEbits.LATE6 = !LATEbits.LATE6;
        delay();
        // all on
        delay();
        LATEbits.LATE6 = !LATEbits.LATE6;
        delay();
        LATEbits.LATE7 = !LATEbits.LATE7;
        delay();
        LATEbits.LATE5 = !LATEbits.LATE5;
        delay();
        LATEbits.LATE4 = !LATEbits.LATE4;
        delay();
        LATEbits.LATE3 = !LATEbits.LATE3;
        delay();
        LATEbits.LATE2 = !LATEbits.LATE2;
        delay();
        LATEbits.LATE1 = !LATEbits.LATE1;
        delay();
        LATEbits.LATE0 = !LATEbits.LATE0;
        delay();
        // all off
        LATEbits.LATE0 = 1;
        delay();
        LATEbits.LATE0 = 0;
        delay();
        LATEbits.LATE2 = 1;
        delay();
        LATEbits.LATE2 = 0;
        delay();
        
        LATEbits.LATE1 = 1;
        delay();
        LATEbits.LATE1 = 0;
        delay();
        LATEbits.LATE3 = 1;
        delay();
        LATEbits.LATE3 = 0;
        delay();
        
        LATEbits.LATE2 = 1;
        delay();
        LATEbits.LATE2 = 0;
        delay();
        LATEbits.LATE4 = 1;
        delay();
        LATEbits.LATE4 = 0;
        delay();
        
        LATEbits.LATE3 = 1;
        delay();
        LATEbits.LATE3 = 0;
        delay();
        LATEbits.LATE5 = 1;
        delay();
        LATEbits.LATE5 = 0;
        delay();
        
        LATEbits.LATE4 = 1;
        delay();
        LATEbits.LATE4 = 0;
        delay();
        LATEbits.LATE7 = 1;
        delay();
        LATEbits.LATE7 = 0;
        delay();
        
        LATEbits.LATE5 = 1;
        delay();
        LATEbits.LATE5 = 0;
        delay();
        LATEbits.LATE6 = 1;
        delay();
        LATEbits.LATE6 = 0;
        delay();
        delay();
        
        LATEbits.LATE6 = 1;
        delay();
        LATEbits.LATE6 = 0;
        delay();
        LATEbits.LATE5 = 1;
        delay();
        LATEbits.LATE5 = 0;
        delay();
        
        LATEbits.LATE7 = 1;
        delay();
        LATEbits.LATE7 = 0;
        delay();
        LATEbits.LATE4 = 1;
        delay();
        LATEbits.LATE4 = 0;
        delay();
        
        LATEbits.LATE5 = 1;
        delay();
        LATEbits.LATE5 = 0;
        delay();
        LATEbits.LATE3 = 1;
        delay();
        LATEbits.LATE3 = 0;
        delay();
        
        LATEbits.LATE4 = 1;
        delay();
        LATEbits.LATE4 = 0;
        delay();
        LATEbits.LATE2 = 1;
        delay();
        LATEbits.LATE2 = 0;
        delay();
        
        LATEbits.LATE3 = 1;
        delay();
        LATEbits.LATE3 = 0;
        delay();
        LATEbits.LATE1 = 1;
        delay();
        LATEbits.LATE1 = 0;
        delay();
        
        LATEbits.LATE2 = 1;
        delay();
        LATEbits.LATE2 = 0;
        delay();
        LATEbits.LATE0 = 1;
        delay();
        LATEbits.LATE0 = 0;
        delay();
        delay();
        delay();
        LATEbits.LATE0 = 1;
        LATEbits.LATE6 = 1;
        delay();
        LATEbits.LATE0 = 0;
        LATEbits.LATE6 = 0;
        delay();
        LATEbits.LATE1 = 1;
        LATEbits.LATE7 = 1;
        delay();
        LATEbits.LATE1 = 0;
        LATEbits.LATE7 = 0;
        delay();
        LATEbits.LATE2 = 1;
        LATEbits.LATE5 = 1;
        delay();
        LATEbits.LATE2 = 0;
        LATEbits.LATE5 = 0;
        delay();
        LATEbits.LATE3 = 1;
        LATEbits.LATE4 = 1;
        delay();
        LATEbits.LATE3 = 0;
        LATEbits.LATE4 = 0;
        delay();
        delay();
        
        LATEbits.LATE3 = 1;
        LATEbits.LATE4 = 1;
        delay();
        LATEbits.LATE3 = 0;
        LATEbits.LATE4 = 0;
        delay();
        LATEbits.LATE2 = 1;
        LATEbits.LATE5 = 1;
        delay();
        LATEbits.LATE2 = 0;
        LATEbits.LATE5 = 0;
        delay();
        LATEbits.LATE1 = 1;
        LATEbits.LATE7 = 1;
        delay();
        LATEbits.LATE1 = 0;
        LATEbits.LATE7 = 0;
        delay();
        LATEbits.LATE0 = 1;
        LATEbits.LATE6 = 1;
        delay();
        LATEbits.LATE0 = 0;
        LATEbits.LATE6 = 0;
        delay();
    }
    return 0;
};