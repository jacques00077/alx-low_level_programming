#include "main.h"

/**
 * _isalpha - New Entry point
 * @c: alpabet to check for
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
