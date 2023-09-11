#include <stdio.h>

/**
 * main - Print all base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';
	int i = 0;


	while (i < 10)
{
	putchar((i % 10) + '0');
	i++;
}
	while (alphabet <= 'f')
{
	putchar(alphabet);
	alphabet++;
}
	putchar('\n');
	return (0);
}
