#include <stdio.h>

/**
 * main -  single digit numbers
 *
 * Description: to print sigle digit numbers in base ten
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
