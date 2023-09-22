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
	i = 0;
	while (i < n)
	{
		p++;
		i++;
	}
	k = 0;
	while (k < i / 2)
	{
		j = a[k];
		a[k] = *p;
		*p = j;
		p--;
		k++;
	}
}
