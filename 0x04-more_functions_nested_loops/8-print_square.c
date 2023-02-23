#include "main.h"

/**
 * print_square - prints a square shape followed by a new line
 * @size: the size of the square to be printed
 * Return: void
 */

void print_square(int size)
{
	int line = 1;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	while ((line <= size) && (size > 0))
	{
		int hash_tag = 1;

		for (; hash_tag <= size; hash_tag++)
		{
			_putchar('#');
		}
		_putchar('\n');
		line++;
	}
}	
