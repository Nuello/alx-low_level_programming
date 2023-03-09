#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial is computed
 * Return: 0(Success), otherwise -1.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
