#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return (0)
 */

void print_numbers(void)
{
	int start = 0;

	for (;start <= 9; start++)
	{
		_putchar(start + '0');
	}
	_putchar('\n');
}
