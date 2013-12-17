/*  Grove LED BAR libraries for TI msp430 launchpad.

Created with the libraries provided by seed studio for arduino.

Ported by : Mahesh M
e-mail : maheshmohan93@gmail.com
blog: http://blogofmahe.wordpress.com

*/

#ifndef MSP_LEDBAR_H
#define MSP_LEDBAR_H
#include<msp430.h>

#define DIR_data P2DIR
#define DIR_clk P2DIR
#define PORT_data P2OUT
#define PORT_clk P2OUT

#define BIT_data 0x01
#define BIT_clk 0x02

#define CmdMode 0x0000 //Work in 8bit Mode
#define ON 0x00ff   //8bit 1 data
#define OFF 0x0000  //8bit 0 data

void msp_ledbar(void);
void set_LED_index(unsigned int);
void set_LED_range(unsigned int);
void send16bitdata(unsigned int);
void latchdata(void);

#endif;
