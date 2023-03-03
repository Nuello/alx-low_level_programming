#include "main.h"

/**
 * puts_half - Prints the half of a string
 * @str: The address of a string whose half is to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int split = ((_strlen(str)) / 2);

	while (str[split] != '\0')
	{
		_putchar(str[split]);
		split++;
	}
	_putchar('\n');
}
