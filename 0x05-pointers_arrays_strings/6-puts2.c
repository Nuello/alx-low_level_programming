#include "main.h"

/**
 * puts2 - prints even numbers
 * @str: Address of string whose elements will be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
