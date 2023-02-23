#include "main.h"

/**
 * _isupper - Afunction that checks for uppercase character
 * @c: The character to be checked if it is uppercase character
 * Return: 1 (Success)
 * Otherwise: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
