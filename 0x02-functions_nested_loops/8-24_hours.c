#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Returns: void.
 */




#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 
int _putchar(char c)
{
	return (write(1, &c, 1));
}*/


void main(void)
{
	int a = 48, b = 48, c = 48, d = 48;

	while (a <= 50)
	{
		for (; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
