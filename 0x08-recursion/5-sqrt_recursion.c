#include "main.h"

/**
 * sqrt_guess - Guess sqrt of an integer starting from 1
 * @num: The integer whose sqrt is to be guessed
 * @guess: The guessed sqrt
 * Return: The guessed sqrt or -1 if failed
 */

int sqrt_guess(int num, int guess)
{
	if (guess == num && num != 1)
	{
		return (-1);
	}
	else if ((guess * guess) == num)
	{
		return (guess);
	}
	else
	{
		guess += 1;
	}
	return (sqrt_guess(num, guess));
	
}

/**
 * _sqrt - computes the square root of a given integer
 * @n: The integer whose square root is computed
 * Return: The square root of a give integer or -1 if it does not exit.
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
		return (sqrt_guess(n, 1));
}
