#include "main.h"

/**
 * _isdigit - checks if an argument is a digit
 * @c: the argument to be checked
 * Return: 1 (Success)
 * Otherwise: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
