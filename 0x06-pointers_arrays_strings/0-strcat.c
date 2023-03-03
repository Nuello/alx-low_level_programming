#include "main.h"
int _strlen(char *);

/**
 * _strcat - Concatenates two strings
 * @dest: The final concatenation of both strings
 * @src: The string that is added to another string
 * Return: The final concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest), i;

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _strlen - Gets the length of a string
 * @s: The string the length is to be obtained
 * Return: The length of a string
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
