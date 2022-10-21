/*
 * Peripheral_Setup.c
 *
 *  Created on: 21 de out de 2022
 *      Author: William
 */

#include "Peripheral_Setup.h"

void Setup_GPIO(void)
{
    EALLOW;

    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0;

    GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;
    GpioCtrlRegs.GPAPUD.bit.GPIO1 = 0;
    GpioCtrlRegs.GPAPUD.bit.GPIO2 = 0;
    GpioCtrlRegs.GPAPUD.bit.GPIO3 = 0;

    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;
    GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;

    EDIS;
}
