#include <stdio.h>

/**
 * main - Print all base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';
	int i = 0;
	
	while (i < 10)
{
	putchar((i % 10) + '0');
	i++;
}
	while (alph <= 'f')
{
	putchar(alph);
	alph++;
}
	putchar('\n');
	return (0);
}
