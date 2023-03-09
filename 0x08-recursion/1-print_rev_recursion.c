#include "main.h"
int count(char *);

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: A pointer to the address of the string to be reversed
 * Return: Always void.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
