#include "main.h"

/**
 * more_numbers - prints 10times teh numbers from 0 to 14, followed by a new
 * line
 * Return: 0(Success)
 */

void more_numbers(void)
{
	int line_count = 0, num_count;

	while (line_count <= 9)
	{
		for (num_count = 0; num_count <= 14; num_count++)
		{
			if (num_count > 9)
			{
				_putchar((num_count / 10) + '0');
			}
			_putchar((num_count % 10) + '0');
		}
		line_count++;
		_putchar('\n');
	}
}
