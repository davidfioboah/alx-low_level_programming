#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times
 * @ i - lines
 * @ j - spaces
 * return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('_');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
