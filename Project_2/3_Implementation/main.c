/***
 * AUTHORS : K A AMIRASOHAIL & VINAYAK SINGH M ( TEAM NO : 8)
 * PROJECT ON : ARM BASED MICROCINTROLLERS
 *
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
   uint32_t k=0;
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
 * AUTHORS : K A AMIRASOHAIL & VINAYAK SINGH M ( TEAM NO : 8)
 * PROJECT ON : ARM BASED MICROCINTROLLERS
 *
 */

   GpioLed2.pGPIOx = GPIOD;
   GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
   GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
   GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
   GPIO_PeriClockControl(GPIOD, ENABLE);
   GPIO_Init(&GpioLed2);

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
/***
 * AUTHORS : K A AMIRASOHAIL & VINAYAK SINGH M ( TEAM NO : 8)
 * PROJECT ON : ARM BASED MICROCINTROLLERS
 *
 */


   GPIOBtn.pGPIOx = GPIOA;
   GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
   GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
   GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
   GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
   GPIO_PeriClockControl(GPIOA, ENABLE);
   GPIO_Init(&GPIOBtn);



   while(1)
   {
	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED && flg==0)
	  		  	   {
	   while(k<=10000000)
	   {
		   if(flg==0)
		  	   {
		  	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		  	   {
		  	  // delay();
		  	   flg=1;
		  	   }
		  	   }
		  	  if(flg==1)
		  	  {
		  	   	   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_DEPRESSED)
		  	   	   {
		  	     flg=0;
		  	   	 cnt++;
		  	   	   }
		  	   	   }
		  	  k++;
	   }}

	   if( cnt ==1)
	   {
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 1);
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 1);
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 1);
	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 1);
	   delay();
	   flg=1;
	   }
/***
 * AUTHORS : K A AMIRASOHAIL & VINAYAK SINGH M ( TEAM NO : 8)
 * PROJECT ON : ARM BASED MICROCINTROLLERS
 *
 */

	   if( cnt==2)
	   	   {
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	   	   GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	   	   delay();

	   	   }

	   if(cnt==3)
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
	   	   	  // flg=1;
	   	   	   }

/***
 * AUTHORS : K A AMIRASOHAIL & VINAYAK SINGH M ( TEAM NO : 8)
 * PROJECT ON : ARM BASED MICROCINTROLLERS
 *
 */

	     if(cnt==4)
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
	    	 //  	   	   flg=1;
	    	   	   	   }

	 }
}

/***
 * AUTHORS : K A AMIRASOHAIL & VINAYAK SINGH M ( TEAM NO : 8)
 * PROJECT ON : ARM BASED MICROCINTROLLERS
 *
 */

void algofun()
{

}
void lockdoor()
{

}
void unlockdoor()
{

}
