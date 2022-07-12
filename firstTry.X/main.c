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

void delay (void){
    for (long long i = 10000000000000; i > 0; i--){};
};

int main(void) {
    
    
    //TRISE = 0; // works for RE0
    TRISEbits.TRISE0 = 0;
    TRISEbits.TRISE1 = 0;
    //LATEbits.LATE0 = 0;
    while (1){
    //for (int e = 10000; e > 0; e--){
        //LATEbits.LATE0 = !LATEbits.LATE0;
        LATEbits.LATE1 = !LATEbits.LATE1;
        delay();
        delay();
        delay();
        delay();
        delay();
        
    
        //LATEbits.LATE0 = 0;
        //delay();
        
//        delay();
//        if (PORTEbits.RE0 == 0){
//            LATEbits.LATE0 = 0;
//        }
        
//        if (LATEbits.LATE0 == 1) {
//            LATEbits.LATE0 = 0; // this line runs but ...
//            delay();
//        };
//        LATEbits.LATE0 = 1; // this doesn't
        // back to top of loop ??
    }
    //LATEbits.LATE0 = 1; // exits for loop
    //}
    //LATEbits.LATE0 = 0; // doesn't exit while loop
    
    
//    while(1) {
//        if (PORTEbits.RE0 == 0) {
//            LATEbits.LATE0 = 1;
//            delay();
//            LATEbits.LATE0 = 0;
//        };
        //delay();
//        LATEbits.LATE0 = 0;
//        delay();
    //}
//    while(1) {
//        //LATE = 1; // works for RE0
//        LATEbits.LATE0 = 1;
//        /*
//        LATEbits.LATE0 == 1 ? LATEbits.LATE0 = 0 : (LATEbits.LATE0 = 1);
//        delay();
//        LATEbits.LATE0 == 0 ? (LATEbits.LATE0 = 1) : (LATEbits.LATE0 = 0);
//        delay();
//        */
//        for (int j = 100; j > 0; j--){
//            LATEbits.LATE0 = 0;
//            printf
//            delay(500);
//            LATEbits.LATE0 = 1;
//            delay(500);
//        };
    //}
}
/*
        TRISEbits.TRISE0 = 0; //set pin as output
        LATEbits.LATE0 = 1; // set logic to high, turn LED on
        delay();
        TRISEbits.TRISE1 = 0; 
        LATEbits.LATE1 = 1; 
        delay();
        TRISEbits.TRISE2 = 0; 
        LATEbits.LATE2 = 1; 
        delay();
        TRISEbits.TRISE3 = 0; 
        LATEbits.LATE3 = 1; 
        delay();
        TRISEbits.TRISE4 = 0; 
        LATEbits.LATE4 = 1; 
        delay();
        TRISEbits.TRISE5 = 0; 
        LATEbits.LATE5 = 1; 
        delay();
        TRISEbits.TRISE6 = 0; 
        LATEbits.LATE6 = 1; 
        delay();
        TRISEbits.TRISE7 = 0; 
        LATEbits.LATE7 = 1; 
        delay();
        */