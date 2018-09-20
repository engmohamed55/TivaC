#ifndef GPIO_H_
#define GPIO_H_



#define PORTA 				 (( unsigned long)0x40004000)
#define PORTB 				 (( unsigned long)0x40005000)
#define PORTC 				 (( unsigned long)0x40006000)
#define PORTD 				 (( unsigned long)0x40007000)
#define PORTE 				 (( unsigned long)0x40024000)
#define PORTF 				 (( unsigned long)0x40025000)

#define GPIODIR              (( unsigned long)0x400)
#define GPIODEN              (( unsigned long)0x51C)
#define GPIOLOCK             (( unsigned long)0x520)
#define GPIOCR               (( unsigned long)0x524)
#define GPIOAFSEL            (( unsigned long)0x420)
#define GPIOPUR              (( unsigned long)0x510)	
#define GPIOAMSEL            (( unsigned long)0x528)	
#define GPIOPCTL             (( unsigned long)0x52C)
#define GPIODATA             (( unsigned long)0x000)


#define RCGCGPIO             (*((volatile unsigned long *)0x400FE608))



#define REG(BASE,OFFSET)   (*((volatile unsigned long *)((BASE)+(OFFSET))))
#define SET_BIT_VALUE(REG,BIT,VALUE) ((REG) |= ((VALUE)<<(BIT)))
#define SET_BIT(REG,BIT) ((REG) |= (1<<(BIT)))
#define CLEAR_BIT(REG,BIT) ((REG) &= (~(1<<(BIT))))



typedef enum{ A=0, B=1, C=2, D=3, E=4, F=5 }PORTS;
typedef enum{ PA0=0, PA1=1, PA2=2, PA3=3, PA4=4, PA5=5, PA6=6, PA7=7 }PORT_A_PINS;
typedef enum{ PB0=0, PB1=1, PB2=2, PB3=3, PB4=4, PB5=5, PB6=6, PB7=7 }PORT_B_PINS;
typedef enum{ PC0=0, PC1=1, PC2=2, PC3=3, PC4=4, PC5=5, PC6=6, PC7=7 }PORT_C_PINS;
typedef enum{ PD0=0, PD1=1, PD2=2, PD3=3, PD4=4, PD5=5, PD6=6, PD7=7 }PORT_D_PINS;
typedef enum{ PE0=0, PE1=1, PE2=2, PE3=3, PE4=4, PE5=5, PE6=6, PE7=7 }PORT_E_PINS;
typedef enum{ PF0=0, PF1=1, PF2=2, PF3=3, PF4=4, PF5=5, PF6=6, PF7=7 }PORT_F_PINS;





#endif