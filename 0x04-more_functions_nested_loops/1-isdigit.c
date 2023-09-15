#include "main.h"

/**
 * _isdigit - function that checks if a character is a digit
 * @c: digit check is done on this character
 *
 * Return: 1 if true, and 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

