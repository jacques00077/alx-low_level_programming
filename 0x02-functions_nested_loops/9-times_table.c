#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int v, w, x;

	for (v = 0; v < 10; v++)
	{
		for (w = 0; w < 10; w++)
		{
			x = w * v;
			if (w == 0)
			{
				_putchar(x + '0');
			}

			if (x < 10 && w != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			} else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
