#include <stdio.h>
/**
 * main - New Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int l;

	for (l = 0; l < 10; l++)
	{
		putchar(l + '0');
		if (l < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
