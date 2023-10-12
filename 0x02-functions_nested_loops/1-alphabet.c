#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets
 */

void print_alphabet(void)
{
	int index;

	for (index = 'a'; index <= 'z'; index++)
	{
		_putchar(index);
	}
	_putchar('\n');
}
