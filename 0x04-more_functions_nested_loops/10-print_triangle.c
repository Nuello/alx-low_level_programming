#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: the size of the triangle
 * Returns: void
 */

void print_triangle(int size)
{
	int lines = 1, pound;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (lines <= size)
	{
		for (pound = 1, spaces = size; pound <= size; spaces--, pound++)
		{
			if (spaces > lines)
			{
				_putchar(' ');
			}
			else if (spaces <= lines)
			{
				_putchar('#');
			}
		}
		lines++;
		_putchar('\n');
	}
}
