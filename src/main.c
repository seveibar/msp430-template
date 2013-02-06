/*
 * Example main.c file for MSP430
 * Alternates red and green LEDs on MSP430 launchpad
 */

#include <msp430.h>

int main() {
    // halt watchdog
    WDTCTL = WDTPW + WDTHOLD;
    // make 1.0 and 1.6 pins outputs
    P1DIR = 0x41;
    // set 1.0 pin high
    P1OUT = 0x1;
    for (;;) {
    // toggle 1.0 and 1.6 pins
    P1OUT ^= 0x41;
    __delay_cycles(300000);
    }
}
