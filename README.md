MSP430 Template
===============

## Toolchain

### Dependencies

* make
* binutils-msp430
* gcc-msp430
* gdb-msp430
* msp430-libc
* msp430mcu
* mspdebug
* srecord
* unix2dos

### Ubuntu

Packages for the MSP430 toolchain are available in the Ubuntu repositories. To fetch the required packages, run:

    sudo apt-get install build-essential srecord binutils-msp430 gcc-msp430 gdb-msp430 msp430-libc msp430mcu mspdebug dos2unix

This will install the build toolchain and the mspdebug tool.

## Writing and Building Firmware

1. Clone the [msp430-template](https://github.com/uctools/msp430-templates) repository (or fork it and clone your own repository).

        git clone git@github.com:uctools:msp430-template

2. Modify the Makefile:
    * Set TARGET to the desired name of the output file (eg: TARGET = main)
    * Set SOURCES to a list of your sources (eg: SOURCES = main.c two.c three.c)
    * Set MCU to the MSP430 part number to build for (eg: MCU = msp430g2231)

3. Run `make`

4. The output files will be created in the 'build' folder

## Flashing

### mspdebug

To flash a device using mspdebug, run mspdebug and specify a debugger. For the MSP430 Launchpad, the debugger is `rf2500`:

    mspdebug rf2500

Note, you may need to run mspdebug as root.

In mspdebug, you can load and run the program:

    (mspdebug) load build/main.hex
    (mspdebug) run

Further support on using mspdebug is available on the [mspdebug homepage](http://mspdebug.sourceforge.net/) and in the [mspdebug manual](http://mspdebug.sourceforge.net/manual.html).
