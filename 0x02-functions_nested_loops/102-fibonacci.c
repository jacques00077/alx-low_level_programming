#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int i, y, l, next;

	y = 1;

	l = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (y != 20365011074)
		{
			printf("%ld, ", y);
		} else
		{
			printf("%ld\n", y);
		}
		next = y + l;
		y = l;
		l = next;
	}

	return (0);
}
