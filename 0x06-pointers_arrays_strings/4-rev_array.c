#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array a
 * @n: number of elements of a
 */

void reverse_array(int *a, int n)
{
	int *p, i, j, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *p;
		*p = j;
		p--;
	}
}
