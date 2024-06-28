#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"

// Set pin direction...

void MDIO_voidsetpindir(u8 Copy_u8portName, u8 Copy_u8pinNumber, u8 Copy_u8dirStatus)
{
	switch(Copy_u8portName)
	{
		case DIO_PORTA:
			if ( OUTPUT==Copy_u8dirStatus )
			{
				SET_BIT(DDRA,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(DDRA,Copy_u8pinNumber);
			}
		break;
		case DIO_PORTB:
			if ( OUTPUT==Copy_u8dirStatus )
			{
				SET_BIT(DDRB,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(DDRB,Copy_u8pinNumber);
			}
		break;
		case DIO_PORTC:
			if ( OUTPUT==Copy_u8dirStatus )
			{
				SET_BIT(DDRC,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(DDRC,Copy_u8pinNumber);
			}
		break;
		case DIO_PORTD:
			if ( OUTPUT==Copy_u8dirStatus )
			{
				SET_BIT(DDRD,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(DDRD,Copy_u8pinNumber);
			}
		break;
		default:
			/* Do Nothing */
		break;
	}
}

// Write pin...

void MDIO_voidsetpinval(u8 Copy_u8portName, u8 Copy_u8pinNumber, u8 Copy_u8inputVal)
{
	switch(Copy_u8portName)
	{
		case DIO_PORTA:
			if ( HIGH==Copy_u8inputVal )
			{
				SET_BIT(PORTA,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(PORTA,Copy_u8pinNumber);
			}
		break;
		case DIO_PORTB:
			if ( HIGH==Copy_u8inputVal )
			{
				SET_BIT(PORTB,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(PORTB,Copy_u8pinNumber);
			}
		break;
		case DIO_PORTC:
			if ( HIGH==Copy_u8inputVal )
			{
				SET_BIT(PORTC,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(PORTC,Copy_u8pinNumber);
			}
		break;
		case DIO_PORTD:
			if ( HIGH==Copy_u8inputVal )
			{
				SET_BIT(PORTD,Copy_u8pinNumber);
			}
			else
			{
				CLR_BIT(PORTD,Copy_u8pinNumber);
			}
		break;
		default:
			/* Do Nothing */
		break;
	}
}