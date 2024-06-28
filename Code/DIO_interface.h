#ifndef 	MCAL_DIO_DIO_interface_H_
#define 	MCAL_DIO_DIO_interface_H_

#define 	PIN0        0
#define 	PIN1        1
#define 	PIN2        2
#define 	PIN3        3
#define 	PIN4        4
#define 	PIN5        5
#define 	PIN6        6
#define 	PIN7        7

#define 	DIO_PORTA   0
#define 	DIO_PORTB   1
#define 	DIO_PORTC   2
#define 	DIO_PORTD   3

#define 	OUTPUT      	1
#define 	INPUT       	0

#define 	LOW         	0
#define 	HIGH        	1


void MDIO_voidsetpindir(u8 Copy_u8portName, u8 Copy_u8pinNumber, u8 Copy_u8dirStatus);

void MDIO_voidsetpinval(u8 Copy_u8portName, u8 Copy_u8pinNumber, u8 Copy_u8inputVal);


#endif