#include "main.h"

/**
 * _strlen - Counts the length of a string
 * @s: The address of the string to be counted
 * Return: Always 0(Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
