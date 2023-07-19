#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, return -1, and errno is appropriately set.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
