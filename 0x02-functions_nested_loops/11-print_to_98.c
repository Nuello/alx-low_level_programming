#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural num to 98.
 * @n: The start point
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				break;
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				break;
			printf("%d, ", n);
		}
	}
	printf("%d\n", 98);
}
