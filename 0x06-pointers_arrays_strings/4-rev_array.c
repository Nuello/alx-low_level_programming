#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The address of the array to be reversed
 * @n: The number of element in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp_num, i = 0;

	for (n -= 1; i < (n / 2); i++)
	{
		temp_num = a[i];
		a[i] = a[n - i];
		a[n - i] = temp_num;
	}
}
