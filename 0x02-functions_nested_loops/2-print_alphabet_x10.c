#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int repeat;

	for (repeat = 1; repeat < 11; repeat++)
	{
		char start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start += 1;
		}
		_putchar('\n');
	}
}
