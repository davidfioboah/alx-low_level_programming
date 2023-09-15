#include "main.h"

/**
 * _isupper - function that checks for uppercase
 * @c: uppercase check is done on this character
 *
 * Return: 1 if true, and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
