#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - To check if a random number is positive or negative
 *
 * Description: the variable will be assigned a random number each time it is executed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
 	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
