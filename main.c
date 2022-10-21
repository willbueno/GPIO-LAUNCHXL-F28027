#include "Peripheral_Setup.h"

uint32_t count = 0;

/**
 * main.c
 */
int main(void)
{
    InitSysCtrl();          // Initialize System Control
    DINT;                   // Disable CPU interrupts
    InitPieCtrl();          // Initialize the PIE control registers to their default state

    IER = 0x0000;           // Disable CPU interrupts
    IFR = 0x0000;           // Clear all CPU interrupt flags

    InitPieVectTable();     // Initialize the PIE vector table

    Setup_GPIO();

    EINT;                   // Enable Global interrupt INTM
    ERTM;                   // Enable Global real time interrupt DBGM

    while (1)
    {
        for (count = 0; count < 0x00FFFFFF; count++)
        {
        }

        // GpioDataRegs.GPADAT.bit.GPIO0 = 0/1;     // Valor do registrador
        // GpioDataRegs.GPASET.bit.GPIO0 = 1;       // Set para nivel logico alto
        // GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;     // Set para nivel logico baixo
        // GpioDataRegs.GPATOGGLE.bit.GPIO0 = 1;    // Inverte o nivel logico

    }

    return 0;
}
