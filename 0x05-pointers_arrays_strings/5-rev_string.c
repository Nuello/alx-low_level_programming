#include "main.h"
int _strlen(char *s);

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = (_strlen(s) - 1), i;
	char temp;

	for (i = 0; i < (len / 2); i++)
	{
		temp = s[len - i];
		s[len - i] = s[i];
		s[i] = temp;
	}
}

/**
 * _strlen - Returns the length of a string
 * @s: The address of the string whose length is to be returned
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
