#ifndef UART_H_
#define UART_H_

#include "UART_CONF.h"



#define UART0_BASE 				((unsigned long)0x4000C000)
#define UART1_BASE 				((unsigned long)0x4000D000)
#define UART2_BASE 				((unsigned long)0x4000E000)
#define UART3_BASE				((unsigned long)0x4000F000)
#define UART4_BASE 				((unsigned long)0x40010000)
#define UART5_BASE 				((unsigned long)0x40011000)
#define UART6_BASE 				((unsigned long)0x40012000)
#define UART7_BASE 				((unsigned long)0x40013000)


#define UARTCTL               ((unsigned long)0X030)
#define UARTIBRD              ((unsigned long)0X024)
#define UARTFBRD              ((unsigned long)0X028)
#define UARTLCRH              ((unsigned long)0X02C)
#define UARTCC                ((unsigned long)0XFC8)
#define UARTLCRH              ((unsigned long)0X02C)
#define UARTFR                ((unsigned long)0X018)
#define UARTDR                ((unsigned long)0X000)
#define UARTIFLS              ((unsigned long)0X034)
#define UARTIM                ((unsigned long)0X038)
#define UARTRIS               ((unsigned long)0X03C)
#define UARTICR               ((unsigned long)0X044)
#define UARTMIS               ((unsigned long)0X040)


#define RCGCUART          (*((volatile unsigned long * )0x400FE618))


#define UART0_INT_NO       5
#define UART1_INT_NO       6




#define REG(BASE,OFFSET)   (*((volatile unsigned long *)((BASE)+(OFFSET))))
#define SET_BIT_VALUE(REG,BIT,VALUE) ((REG) |= ((VALUE)<<(BIT)))
#define SET_BIT(REG,BIT) ((REG) |= (1<<(BIT)))
#define CLEAR_BIT(REG,BIT) ((REG) &= (~(1<<(BIT))))


typedef enum { UART0 = 0, UART1 = 1 , UART2 = 2, UART3 = 3, UART4 = 4 , UART5 = 5, UART6 = 6, UART7 = 7 } UARTs;
typedef enum { TXFE=7 ,RXFF=6, TXFF=5, RXFE=4, BUSY=3, CTS = 0} FR_BITS;
typedef enum { n9BITIM = 12, OEIM =10, BEIM = 9, PEIM = 8, FEIM = 7, RTIM = 6, TXIM = 5, RXIM = 4, CTSIM=1} UARTIM_BITS;
typedef enum { n9BITRIS = 12, OERIS = 10, BERIS = 9, PERIS =8, FERIS = 7, RTRIS = 6, TXRIS=5, RXRIS=4, CTSRIS = 1} UARTRIS_BITS;



void UART_INIT(void);


#endif