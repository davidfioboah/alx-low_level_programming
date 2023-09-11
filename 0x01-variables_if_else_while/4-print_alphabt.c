#include <stdio.h>

/**
 * main - prints the letters of the alphabet in lowercase
 *
 * Description: The letters e and q are exempted
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph = 97;

	while(alph < 123)
	{
		if(alph != 101 && alph != 113)
		{
			putchar(alph);
		}
		alph = alph + 1;
	}
	putchar('\n');
	return (0);
}
