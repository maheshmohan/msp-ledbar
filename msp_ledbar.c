/*  Grove LED BAR libraries for TI msp430 launchpad.

Created with the libraries provided by seed studio for arduino.

Ported by : Mahesh M
e-mail : maheshmohan93@gmail.com
blog: http://blogofmahe.wordpress.com

*/

#include "msp_ledbar.h"
#include<msp430.h>


void msp_ledbar(void)
{
  DIR_data |= BIT_data;
  DIR_clk |= BIT_clk;
}

void set_LED_index(unsigned int index)
{
  unsigned char i;
  send16bitdata(CmdMode);
  for(i=0;i<12;i++)
  {
    if(index&0x0001)
    send16bitdata(ON);
    else
    send16bitdata(OFF);
    index = index>>1;
  }
  latchdata();
}

void set_LED_range(unsigned int indexTo)
{
  unsigned char i;
  
  send16bitdata(CmdMode);
  for(i=0;i<12;i++)
  {
    if(i<indexTo)
    send16bitdata(ON);
    else
    send16bitdata(OFF);
  }
}

void send16bitdata(unsigned int data)
{
  for(unsigned char i = 0;i<16;i++)
  {
    if(data&0x8000)
    PORT_data |= BIT_data;
    else
    PORT_data &= ~BIT_data;
    
    PORT_clk ^= BIT_clk;
    data <<= 1;
  }
}

void latchdata(void)
{
  P2OUT &= ~0x01;
  for(int i = 1000; i!=0; i--);
  for(unsigned char i=0;i<8;i++)
  {
      P2OUT ^= 0x01;
  }  
}
