#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: A pointer to the diagonal matrix
 * @size: Dimension of the matrix.
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int indx, indx2 = size - 1,  l_sum = 0, r_sum = 0;

	for (indx = 0; indx < size; indx++, indx2--)
	{
		l_sum += a[indx];
		r_sum += a[indx2];
		a += size;
	}
	printf("%d, %d\n", l_sum, r_sum);
}
