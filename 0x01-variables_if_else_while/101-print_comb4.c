#include <stdio.h>
/**
 * main - Program Entry point
 * Return: 0
 */

int main(void)
{
	int m = '0';
	int n = '0';
	int o = '0';

	while (m <= '7')
	{
		while (n <= '0')
		{
			while (o <= '0')
			{
				if (m < n && n < o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (!(m == '7' && n == '8' && o == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			o = '0';
			n++;
		}
		n = '0';
		m++;
	}
	putchar('\n');
	return (0);
}
