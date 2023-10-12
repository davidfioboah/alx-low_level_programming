#include "main.h"

/**
 * _islower -> checks if a character is a lowercase
 * @c: c is an ascii character
 *
 * Return: returns 1 or 0 depending on the condition
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
