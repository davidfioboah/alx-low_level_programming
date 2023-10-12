#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to be raised
 * @y: power to be raised to
 *
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	int results = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	results *= _pow_recursion(x, y - 1);

	return (results);
}
