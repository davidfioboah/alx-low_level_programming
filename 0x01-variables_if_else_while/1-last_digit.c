#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of a random number
 *
 * Description: print the last digit of a random number
 *
 * Return: Aiways 0 (Success)
 */
int main(void)
{
	int n, lastNumb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNumb = n % 10;
	if (lastNumb > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumb);
	}
	else if (lastNumb == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNumb);
	}
	else if (lastNumb < 6 && lastNumb != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNumb);
	return (0);
}
