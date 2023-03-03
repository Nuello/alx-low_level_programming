#include "main.h"
int _strlen(char *);

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: negative number if string 1 less than string 2.
 * positive number if string 1 greater than string 2.
 * 0 if string 1 equals to string 2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != 0) && (s2[i] != 0))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
