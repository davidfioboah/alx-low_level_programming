#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: string in question
 */

void puts_half(char *str)
{
	int a, b, i;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (i = b; i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}
