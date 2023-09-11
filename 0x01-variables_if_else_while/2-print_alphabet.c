#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets in lowercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while (i < strlen(lower))
	{
		putchar(lower[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
