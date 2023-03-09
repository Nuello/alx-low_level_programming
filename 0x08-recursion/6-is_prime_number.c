#include "main.h"

/**
 * prime_guessor - iterates from 2 to n - 2
 * @n: the number we want to check if it is a prime number
 * @guess: An incrementing variable by 1 up till n - 1
 * Return: 1 if prime or 0 if fails
 */

int prime_guessor(int n, int guess)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (guess == n)
	{
		return (1);
	}
	else if (n % guess == 0)
		return (0);
	return (prime_guessor(n, (guess + 1)));
}

/**
 * is_prime_number - checks an integer if it is a prime number
 * @n: The integer to be checked if it is a prime number
 * Return: 1 if prime or 0 if not prime
 */

int is_prime_number(int n)
{
	return (prime_guessor(n, 2));
}
