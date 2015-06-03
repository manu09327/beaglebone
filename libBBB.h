/*!	\file libBBB.h
	\brief Header for the libBBB library

	Details.
*/

/*!	\def OUT
	\brief Defines string "out" to set direction

	Details.
*/

/*!	\def IN
	\brief Defines string "in" to set direction

	Details.
*/

/*!	\def ON
	Details.
*/

/*!	\def OFF
	Details.
*/

/*!	\def USR1
	Details.
*/

/*!	\def USR2
	Details.
*/

/*!	\def USR3
	Details.
*/

/*!	\def P8_13
	Details.
*/

/*!	\def AIN0
	Details.
*/

/*!	\def AIN1
	Details.
*/

/*!	\def AIN2
	Details.
*/

/*!	\def AIN3
	Details.
*/

/*!	\def AIN4
	Details.
*/

/*!	\def AIN5
	Details.
*/

/*!	\def AIN6
	Details.
*/

/*!	\def AIN7
	Details.
*/

/*!	\fn int addOverlay(char *dtb, char *overname)
	\brief Checks if an overlay is applied and adds it if not.

	\param dtb The name of the dtbo file
	\param overname The short name that is normally echoed to the slots
*/

/*!	\fn int setUsrLedValue(char* led, int value)
	\brief Sets the value of the usr leds
	
	\param led USR0-3 
	\param value ON/OFF to turn on or off the led
*/

/*!	\fn int initPin(int pinnum)
	\brief A function that exports a gpio pin
	
	\param pinnum The gpio pin number
*/

/*!	\fn int setPinDirection(int pinnum, char* dir)
	\brief Sets the pin direction to input or output
	
	\param pinnum The pin number that has already been initialized
	\param dir OUT or IN to set the pin direction
*/

/*!	\fn int setPinValue(int pinnum, int value)
	\brief Set the pin state
	
	\param pinnum The pin number that has already been initialized and set to 
output
	\param value ON or OFF to set the pin high or low
*/

/*!	\fn int getPinValue(int pinnum)
	\brief Gets the input value of a particular pin

	\param pinnum The pin number that has already been initialized and set to 
input
	\return Value of the input
*/

/*!	\fn int initPWM(int mgrnum, char* pin)
	\brief Initializes the PWM module with the bone_capemgr number and the 
pwm pin.
*/

/*!	\fn int setPWMPeriod(int helpnum, char* pin, int period)
	\brief Sets the pwm period in nanoseconds
*/

/*!	\fn int setPWMDuty(int helpnum, char* pin, int duty)
	\brief Sets the pwm duty cycle by setting the high time in nanoseconds
*/

/*!	\fn int setPWMOnOff(int helpnum, char* pin, int run)
	\brief Turns on and off the pwm module
*/

/*!	\fn int initUART(int mgrnum, char* uartnum)
	\brief Initializes an UART module with the bone_capemgr number and the 
module number
*/

/*!	\fn void closeUART(int fd)
	\brief Closes the UART module. Should always be called at the end of a 
program.
*/

/*!	\fn int configUART(UART u, int property, char* value)
	\brief Configures properties about the UART module
*/

/*!	\fn int txUART(int uart, unsigned char data)
	\brief Sends a byte to an UART module
*/

/*!	\fn unsigned char rxUART(int uart)
	\brief Reads in a byte from an UART module
*/

/*!	\fn int strUART(int uart, char* buf)
	\brief Sends a string of characters to the UART module
*/

/*!	\fn int initI2C(int modnum, int addr)
	\brief Initializes an I2C device with the module number and slave 
address.
*/

/*!	\fn void closeI2C(int device)
	\brief Closes the I2C module. Should be called at the end of a program.
*/

/*!	\fn int writeByteI2C(int device, unsigned char *data)
	\brief Sends a byte to a slave device.
*/

/*!	\fn int writeBufferI2C(int device, unsigned char *buf, int len)
	\brief Sends a buffer of bytes to a slave device.
*/

/*!	\fn int readByteI2C(int device, unsigned char *data)
	\brief Reads a byte from a slave device.
*/

/*!	\fn readBufferI2C(int device, int numbytes, unsigned char *buf)
	\brief Reads a buffer of bytes from a slave device.
*/

/*!	\fn int initSPI(int modnum)
	\brief Initializes a SPI module with the module number.
*/

/*!	\fn void closeSPI(int device)
	\brief Closes the SPI module. Should call at the end of a program.
*/

/*!	\fn writeByteSPI(int device, unsigned char *data)
	\brief Sends a byte to a SPI device
*/

/*!	\fn writeBufferSPI(int device, unsigned char *buf, int len)
	\brief Sends a buffer to a SPI device
*/

/*!	\fn readByteSPI(int device, unsigned char *data)
	\brief Reads a byte from a SPI device.
*/

/*!	\fn readBufferSPI(int device, int numbytes, unsigned char *buf)
	\brief Reads a buffer from a SPI device.
*/

/*!	\fn int initLCD()
	\brief Initializes a 4-bit LCD interface.
*/

/*!	\fn int writeChar(unsigned char data)
	\brief Sends a character to the LCD.
*/

/*!	\fn int writeCMD(unsigned char cmd)
	\brief Sends a command to the LCD.
*/

/*!	\fn int writeString(char* str, int len)
	\brief Sends a string of characters to the LCD.
*/

/*!	\fn int LCD_ClearScreen()
	\brief Clears the screen.
*/

/*!	\fn int LCD_Home()
	\brief Moves cursor home.
*/

/*!	\fn int LCD_CR()
	\brief Moves to next line.
*/

/*!	\fn int LCD_Backspace()
	\brief Moves back one.
*/

/*!	\fn int LCD_Move(int location)
	\brief Moves cursor to location
*/

/*!	\fn int initADC(int mgrnum)
	\brief Initializes the onboard ADC with bone_capemgr number.
*/

/*!	\fn int readADC(int helpnum, char* ach)
	\brief Reads a channel of the onboard ADC.
*/

/*!	\fn void pauseSec(int sec)
	\brief Pauses for an integer number of seconds.
*/

/*!	\fn int pauseNanoSec(long nano)
	\brief Pauses for nanoseconds.
*/

/*
//Filename: libBBB.h
//Version : 0.3
//
//Project : Argonne National Lab - Forest
//Author  : Gavin Strunk
//Contact : gavin.strunk@gmail.com
//Date    : 28 June 2013
//
//Description - This is the main header file for
//		the libBBB library.
//
//Revision History
//	0.3:  Bug fix - the I2C functions are working 8/11 \GS
//	0.2:  Removed the LCD functions to make them easier to write
//		applications on top of libLCD 8/7 \GS
//	0.1:  Wrote basic framework with function
//		prototypes and definitions. \GS
*/

/*
Copyright (C) 2013 Gavin Strunk

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#ifndef _libBBB_H_
#define _libBBB_H_

//Includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>

//Type definitions
//!UART Structure
/*!Defines the termios structure for a UART module.*/
typedef struct {
      struct termios u; /*!< u is a termios structure*/
}UART;

//Definitions
#define OUT	"out"
#define IN	"in"
#define ON	1
#define OFF	0

#define USR1	"usr1"
#define USR2	"usr2"
#define USR3	"usr3"
#define P8_13	"P8_13"
#define AIN0	"/AIN0"
#define AIN1	"/AIN1"
#define AIN2	"/AIN2"
#define AIN3	"/AIN3"
#define AIN4	"/AIN4"
#define AIN5	"/AIN5"
#define AIN6	"/AIN6"
#define AIN7	"/AIN7"

//Device Tree Overlay
int addOverlay(char *dtb, char *overname);

//USR Prototypes
int setUsrLedValue(char* led, int value);

//GPIO Prototypes
int initPin(int pinnum);
int setPinDirection(int pinnum, char* dir);
int setPinValue(int pinnum, int value);
int getPinValue(int pinnum);

//PWM Prototypes
int initPWM(int mgrnum, char* pin);
int setPWMPeriod(int helpnum, char* pin, int period);
int setPWMDuty(int helpnum, char* pin, int duty);
int setPWMOnOff(int helpnum, char* pin, int run);

//UART Prototypes
int initUART(int mgrnum, char* uartnum);
void closeUART(int fd);
int configUART(UART u, int property, char* value);
int txUART(int uart, unsigned char data);
unsigned char rxUART(int uart);
int strUART(int uart, char* buf);

//I2C Prototypes
int initI2C(int modnum, int addr);
void closeI2C(int device);
int writeByteI2C(int device, unsigned char *data);
int writeBufferI2C(int device, unsigned char *buf, int len);
int readByteI2C(int device, unsigned char *data);
int readBufferI2C(int device, int numbytes, unsigned char *buf);

//SPI Prototypes
int initSPI(int modnum);
void closeSPI(int device);
int writeByteSPI(int device,unsigned char *data);
int writeBufferSPI(int device, unsigned char *buf, int len);
int readByteSPI(int device, unsigned char *data);
int readBufferSPI(int device, int numbytes, unsigned char *buf);

//ADC Prototypes
int initADC(int mgrnum);
int readADC(int helpnum, char* ach);

//Time Prototypes
void pauseSec(int sec);
int  pauseNanoSec(long nano);

#endif
