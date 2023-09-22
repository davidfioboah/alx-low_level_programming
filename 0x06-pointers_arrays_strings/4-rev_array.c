#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array a
 * @n: number of elements of a
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
	


	
