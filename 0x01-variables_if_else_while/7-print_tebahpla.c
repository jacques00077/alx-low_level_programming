#include <stdio.h>
/**
 * main - prints the lowercase alphbets in reversal
 * using putchar
 * Return 0
 */
int main(void)
{
	char ja;

	for (ja = 'z'; ja >= 'a'; ja--)
	{
		putchar(ja);
	}
	putchar('\n');
	return (0);
}
