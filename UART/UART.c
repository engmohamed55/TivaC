#include "UART.h"
#include "GPIO.h"

void UART_INIT(void)
{
	#ifdef POLLING_UART0
		SET_BIT(RCGCUART,UART0);
		SET_BIT(RCGCGPIO,A);
		CLEAR_BIT(REG(UART0_BASE,UARTCTL),0);
		REG(UART0_BASE,UARTIBRD)= 43;
		REG(UART0_BASE,UARTFBRD)= 26;
		SET_BIT(REG(UART0_BASE,UARTLCRH),4);
		SET_BIT(REG(UART0_BASE,UARTLCRH),5);	
		SET_BIT(REG(UART0_BASE,UARTLCRH),6);			
		SET_BIT(REG(UART0_BASE,UARTCTL),0);
		SET_BIT(REG(PORTA,GPIOAFSEL),PA0);
		SET_BIT(REG(PORTA,GPIOAFSEL),PA1);
		REG(PORTA,GPIOPCTL)=(REG(PORTA,GPIOPCTL)&0xffffff00) | 0x11;
		SET_BIT(REG(PORTA,GPIODEN),PA0);
		SET_BIT(REG(PORTA,GPIODEN),PA1);
		CLEAR_BIT(REG(PORTA,GPIOAMSEL),PA0);
		CLEAR_BIT(REG(PORTA,GPIOAMSEL),PA1);
	#endif
}
