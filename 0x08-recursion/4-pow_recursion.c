#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to power of y
 * @x: Exponent
 * @y: The exponential
 * Return: 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y -= 1));
}
