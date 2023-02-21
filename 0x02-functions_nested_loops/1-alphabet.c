#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start += 1;
	}
	_putchar('\n');
}
