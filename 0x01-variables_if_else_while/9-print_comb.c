#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		number++;
	}
	return (0);
}
