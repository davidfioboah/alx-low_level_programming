#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalised
 * Return: string capitalised
 */

char *cap_string(char *s)
{
	char str[] = {32, 9, '\n', ',', '.', ';', '?', '!', '"', '(', ')', '{', '}'};
	int length = 13;
	int a = 0;
	int i;

	while (s[a])
	{
		i = 0;
		while (i < length)
		{
			if ((a == 0 || s[a - 1] == str[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] -32;
			i++;
		}
		a++;
	}
	return (s);
}
