#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Returns: void.
 */


void jack_bauer(void)
{
	int min, sec;

	for (min = 0; min <= 23; min++)
	{
		int m = min / 10;

		for (sec = 0; sec <= 59; sec++)
		{
			int s = sec / 10;

			if (m == 0)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else
			{
				_putchar(m + '0');
				_putchar(min % 10 + '0');
			}
			_putchar(':');
			if (s == 0)
			{
				_putchar('0');
				_putchar(sec + '0');
			}
			else
			{
				_putchar(s + '0');
				_putchar(sec % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
