#include "main.h"

/**
 * _strlen_recursion - Gets the length of a string
 * @s: Pointer to the address of the string
 * Return: Always length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return 1 + (_strlen_recursion(s + 1));
	}
}
