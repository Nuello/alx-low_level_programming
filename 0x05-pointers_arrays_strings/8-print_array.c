#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array to be printed from
 * @n: Number of elements to be printed
 * Return: Always void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= (n - 1))
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
