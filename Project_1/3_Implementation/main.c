/***
 * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
 *  - MINI PROJECT ON ARM BASED CONTROLLER
 */


#include "MyStm32f407xx.h"

#define BTN_PRESSED ENABLE
#define BTN_DEPRESSED DISABLE

void delay(void)
{
	for(uint32_t i=0;i<500000;i++);
}
void delay1(void)
{
	for(uint32_t j=0;j<50000000;j++);
}
int main(void)
{
   uint32_t flg=0,cnt=0;
   algofun();
   GPIO_Handle_t GpioLed1,GpioLed2,GpioLed3,GpioLed4, GPIOBtn;
   GpioLed1.pGPIOx = GPIOD;
   GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
   GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
   GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
   GPIO_PeriClockControl(GPIOD, ENABLE);
   GPIO_Init(&GpioLed1);
   /***
    * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
    *  - MINI PROJECT ON ARM BASED CONTROLLER
    */

   GpioLed2.pGPIOx = GPIOD;
   GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
   GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
   GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
   GPIO_PeriClockControl(GPIOD, ENABLE);
   GPIO_Init(&GpioLed2);

   /***
    * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
    *  - MINI PROJECT ON ARM BASED CONTROLLER
    */

   GpioLed3.pGPIOx = GPIOD;
   GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
   GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
   GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
   GPIO_PeriClockControl(GPIOD, ENABLE);
   GPIO_Init(&GpioLed3);

   GpioLed4.pGPIOx = GPIOD;
   GpioLed4.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
   GpioLed4.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
   GpioLed4.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GpioLed4.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
   GPIO_PeriClockControl(GPIOD, ENABLE);
   GPIO_Init(&GpioLed4);

   GPIOBtn.pGPIOx = GPIOA;
   GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
   GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
   GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
   GPIO_PeriClockControl(GPIOA, ENABLE);
   GPIO_Init(&GPIOBtn);

   /***
    * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
    *  - MINI PROJECT ON ARM BASED CONTROLLER
    */


   while(1)
   {
	   if(flg==0)
	   {
	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED && cnt ==0)
	   {
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);
	   delay();
	   flg=1;
	   }
	   }
	   if(flg==1)
	  {
	   	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_DEPRESSED)
	   	   {
	   //	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	   //	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	   //	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	   //	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	   //	   delay();
	   	   flg=0;
	   	 cnt++;
	   	   }
	   	   }

	   	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED && cnt==1)
	   	   {
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	   	   delay();
	   	   flg=1;
	   	   }

	   	   /***
	   	 * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
	   	 *  - MINI PROJECT ON ARM BASED CONTROLLER
	   	 */

	   	if(flg==1)
	   		  {
	   		   	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_DEPRESSED)
	   		   	   {
	   		     flg=0;
	   		   	 cnt++;
	   		   	   }
	   		   	   }
	    if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED && cnt==2)
	   	   	   {
	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
	   	   	   delay1();
	   	   	   delay1();
	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
	   	   	   delay1();
	   	   	   delay1();
	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
	   	   	   delay1();
	   	   	   delay1();
	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);
	   	   	   delay1();
	   	   	   delay1();
	   	    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	   	   	   delay1();
	   	       delay1();
	   	   	  GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	   	   		delay1();
	   	   		 delay1();
	   	   	 GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	   	   		delay1();
	   	      delay1();
	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	   	  	   delay1();
	   	   	delay1();
	   	   	   flg=1;
	   	   	   }
	    /***
	     * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
	     *  - MINI PROJECT ON ARM BASED CONTROLLER
	     */

	    if(flg==1)
	    	   		  {
	    	   		   	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_DEPRESSED)
	    	   		   	   {
	    	   		     flg=0;
	    	   		   	 cnt++;
	    	   		   	   }
	    	   		   	   }
	    	    if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED && cnt==3)
	    	   	   	   {
	    	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);
	    	   	   	   delay1();
	    	   	   	   delay1();
	    	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
	    	   	   	   delay1();
	    	   	   	   delay1();
	    	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
	    	   	   	   delay1();
	    	   	   	   delay1();
	    	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
	    	   	   	   delay1();
	    	   	   	   delay1();
	    	   	    	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	    	   	   	   delay1();
	    	   	       delay1();
	    	   	   	  GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	    	   	   		delay1();
	    	   	   		 delay1();
	    	   	   	 GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	    	   	   		delay1();
	    	   	      delay1();
	    	   	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	    	   	  	   delay1();
	    	   	   	delay1();
	    	   	   	   flg=1;
	    	   	   	   }
	    	    /***
	    	     * Author : K A AMIRA SOHAIL ( TEAM NO: 8)
	    	     *  - MINI PROJECT ON ARM BASED CONTROLLER
	    	     */

	 }
}

void algofun()
{

}
void lockdoor()
{

}
void unlockdoor()
{

}

