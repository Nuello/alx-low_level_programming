#include "main.h"

/**
 * print_line - That draws a straight line in the terminal
 * @n: the number of times print the line
 * Return: nothing
 */

void print_line(int n)
{
	int line = 1;

	while ((n > 0) && (line <= n))
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
