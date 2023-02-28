#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: The 1st integer to be swaped
 * @b: The 2nd integer to be swaped
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
