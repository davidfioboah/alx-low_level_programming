#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: name of string
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l))
		l++;
	return (l);
}
