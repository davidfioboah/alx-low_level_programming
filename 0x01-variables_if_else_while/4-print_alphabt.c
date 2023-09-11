#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print lowercase alphabets with q and e removed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while(i < 26)
	{
		if(lowerCase[i] != 'q' && lowercase[i] != 'e')
		{
			putchar(lowercase[i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
