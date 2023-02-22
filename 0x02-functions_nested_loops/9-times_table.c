#include "main.h"

/**
 * times_table - prints 9times table
 *
 * Return: Always void.
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 1; b <= 9; b++)
		{
			int m, n;

			m = a * b;
			n = m / 10;
			if (n == 0)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(n + '0');
				_putchar((m % 10) + '0');
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
