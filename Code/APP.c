#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_interface.h"
#include "DIO_config.h"

int main(void)
{
	MDIO_voidsetpindir(LED_PORT, LED_PIN, STATUS_DIRECTION);

	while(1)
	{
		MDIO_voidsetpinval(LED_PORT, LED_PIN, STATUS_VALUE);
	}
}