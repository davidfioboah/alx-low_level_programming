#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @src: string one
 * @dest:string two
 * @n: parameter three
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

