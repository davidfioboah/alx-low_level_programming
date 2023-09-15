#include "main.h"

/**
 * main - _isupper
 * description: checks if a letter is uppercase
 * Return: 1 if true, and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
