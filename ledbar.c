/*  Grove LED BAR libraries for TI msp430 launchpad.

Created with the libraries provided by seed studio for arduino.

Ported by : Mahesh M
e-mail : maheshmohan93@gmail.com
blog: http://blogofmahe.wordpress.com

trial program

*/

#include<msp430.h>
#include "msp_ledbar.h"

//----------------------------------------------------------------------------------------------------------------------

/*#define DIR_data P2DIR
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
void latchdata(void);*/

//----------------------------------------------------------------------------------------------------------------------

main()
{
  set_LED_index(0b000001101010101);
  for(int i = 3000;i!=0;i--);


  while(1)
  {
    for(int j=0; j<=10; j++)
    {
      set_LED_range(j);
      for(int i =1000; i!=0; i--);
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

/*void msp_ledbar(void)
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
}*/
