#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0
 */
int main(void)
{
	char a;
	int i;
	long int b;
	long long int c;
	float f;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
