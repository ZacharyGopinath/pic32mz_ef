/*
int32_t main(void)
{
/*
#ifndef PIC32_STARTER_KIT
    The JTAG is on by default on POR.  A PIC32 Starter Kit uses the JTAG, but
    for other debug tool use, like ICD 3 and Real ICE, the JTAG should be off
    to free up the JTAG I/O 
    DDPCONbits.JTAGEN = 0;
#endif
USING ICD3, JTAG NOT NEEDED (?) 
    /*Refer to the C32 peripheral library documentation for more
    information on the SYTEMConfig function.
    
    This function sets the PB divider, the Flash Wait States, and the DRM
    /wait states to the optimum value.  It also enables the cacheability for
    the K0 segment.  It could has side effects of possibly alter the pre-fetch
    buffer and cache.  It sets the RAM wait states to 0.  Other than
    the SYS_FREQ, this takes these parameters.  The top 3 may be '|'ed
    together:
    
    SYS_CFG_WAIT_STATES (configures flash wait states from system clock)
    SYS_CFG_PB_BUS (configures the PB bus from the system clock)
    SYS_CFG_PCACHE (configures the pCache if used)
    SYS_CFG_ALL (configures the flash wait states, PB bus, and pCache)

    /* TODO Add user clock/system configuration code if appropriate. 
    SYSTEMConfig(SYS_FREQ, SYS_CFG_ALL); 

    /* Initialize I/O and Peripherals for application 
    InitApp();

    /*Configure Multivector Interrupt Mode.  Using Single Vector Mode
    is expensive from a timing perspective, so most applications
    should probably not use a Single Vector Mode
    INTConfigureSystem(INT_SYSTEM_CONFIG_MULT_VECTOR);

    /* TODO <INSERT USER APPLICATION CODE HERE> 

    while(1)
    {
        
        SYS_CONSOLE_Tasks(sysObj.sysConsole0);
        
        vTaskDelay(10 / portTICK_PERIOD_MS);
    };
};

from plib.h, from user.c

#include <peripheral/adc10.h>
#include <peripheral/bmx.h>
#include <peripheral/cmp.h>
#include <peripheral/cvref.h>
#include <peripheral/dma.h>
#include <peripheral/i2c.h>
#include <peripheral/incap.h>
#include <peripheral/int.h>
#include <peripheral/nvm.h>
#include <peripheral/outcompare.h>
#include <peripheral/pcache.h>
#include <peripheral/pmp.h>
#include <peripheral/ports.h>
#include <peripheral/power.h>
#include <peripheral/reset.h>
#include <peripheral/rtcc.h>
#include <peripheral/spi.h>
#include <peripheral/system.h>
#include <peripheral/timer.h>
#include <peripheral/uart.h>
#include <peripheral/wdt.h>
#include <peripheral/eth.h>
#include <peripheral/CAN.h>

#endif

*/