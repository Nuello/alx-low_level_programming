#include "main.h"

/**
 * print_diagonal - That draws a straight line in the terminal
 * @n: the number of times print the line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int line = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while ((line <= n) && (n > 0))
	{
		int space = 1;

		for (; space <= line; space++)
		{
			if (space == line)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}
		}
		line++;
		_putchar('\n');
	}
}
