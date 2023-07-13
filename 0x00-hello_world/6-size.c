#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0
 */
int main(void)
{
	char a;
	int i;
	long int c;
	long long int b;
	float f;

printf("Size of a char is: %lu.\n", (unsigned long)sizeof(a));
printf("Size of an int is: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int is: %lu.\n", (unsigned long)sizeof(c));
printf("Size of a long long int is: %lu.\n", (unsigned long)sizeof(b));
printf("Size of a float is: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
