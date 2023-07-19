#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char ja;
	int q;

	q = 0;

	while (q < 10)
	{
		ja = 'a';
		while (ja <= 'z')
		{
			_putchar(ja);
			ja++;
		}
		_putchar('\n');
		q++;
	}
}
