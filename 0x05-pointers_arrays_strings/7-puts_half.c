#include "main.h"
int _strlen(char *);

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

/**
 * _strlen - Gets the length of a string
 * @str: The string whose length is of interest
 * Return: Always the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}
