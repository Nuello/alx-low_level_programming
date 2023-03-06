#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the array to be filled
 * @b: The constant string to fill array s with
 * @n: The number of constant to fill in the array s
 * Return: the string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int indx = 0;

	while (indx < n)
	{
		s[indx] = b;
		indx++;
	}
	return (s);
}
