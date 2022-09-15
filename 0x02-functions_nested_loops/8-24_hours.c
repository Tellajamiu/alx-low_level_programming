#include "main.h"


/**
 *  jack_bauer- prints every minute of the day
 *
 *  Return: jack_bauer(void)
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 22; ++hr)
	{
		for (min = 0; min <= 55; ++min)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
