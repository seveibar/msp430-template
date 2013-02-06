MSP430 Template
===============

A template for developing MSP430 firmware using mspgcc.

## Dependencies
* make
* binutils-msp430
* gcc-msp430
* gdb-msp430
* msp430-libc
* msp430mcu
* mspdebug
* srecord 
* unix2dos

### Ubuntu:
This should grab all the dependencies on Ubuntu:
    apt-get install build-essential srecord binutils-msp430 gcc-msp430 gdb-msp430 msp430-libc msp430mcu mspdebug dos2unix

## Usage
1. Configure Makefile by setting target name and CPU variant (TARGET and CPU),
   and adding all source .c files to SOURCES
2. Run 'make'
