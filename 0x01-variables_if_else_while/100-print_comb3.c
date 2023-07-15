#include <stdio.h>
/**
 * main - Program Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int y = '0';
	int z = '0';

	while (y <= '9')
	{
		while (z <= '9')
		{
			if (!(y > z) || y == z)
			{
				putchar(y);
				putchar(z);
				if (y == '8' && z == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = '0';
		z++;
	}
return (0);
}

