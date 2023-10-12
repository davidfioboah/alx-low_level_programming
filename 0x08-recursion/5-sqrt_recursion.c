#include "main.h"

int find_sqrt(int number, int nat_root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @number: The number to find the square root of.
 * @nat_root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int number, int nat_root)
{
	if ((nat_root * nat_root) == number)
		return (nat_root);

	if (nat_root == number / 2)
		return (-1);

	return (find_sqrt(number, nat_root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int nat_root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, nat_root));
}
