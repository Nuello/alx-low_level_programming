#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 * Return: Always void.
 */

void print_number(int n)
{
	if (n % 10 == 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
