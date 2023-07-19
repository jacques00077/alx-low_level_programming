#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int e, f;

	if (n <= 98)
	{
		for (e = n; e <= 98; e++)
		{
			if (e != 98)
				printf("%d, ", e);
			else if (e == 98)
				printf("%d\n", e);
		}
	} else if (n >= 98)
	{
		for (f = n; f >= 98; f--)
		{
			if (f != 98)
				printf("%d, ", f);
			else if (f == 98)
				printf("%d\n", f);
		}
	}
}
