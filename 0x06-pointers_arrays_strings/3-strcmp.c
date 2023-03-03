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
	int len_s1 = _strlen(s1), len_s2 = _strlen(s2), output;

	if (len_s1 > len_s2)
	{
		output = 15;
	}
	else if (len_s1 < len_s2)
	{
		output = -15;
	}
	else
	{
		output = 0;
	}
	return (output);
}

/**
 * _strlen - Gives the length of a string
 * @str: The string whose length we are to find
 * Return: Length of a string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
