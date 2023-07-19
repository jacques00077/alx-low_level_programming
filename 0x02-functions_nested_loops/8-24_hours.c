#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int q, p;

	q = 0;

	while (q < 24)
	{
		q = 0;
		while (p < 60)
		{
			_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');
			_putchar(':');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar('\n');
			p++;
		}
		q++;
	}
}
