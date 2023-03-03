#include "main.h"
int _strlen(char *);

/**
 * _strncat - Concatenates two strings
 * @dest: The string another string is added to
 * @src: The string that is added to another string
 * @n: The number of string to be added from src to dest
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = _strlen(dest), i = 0;
	int len_src = _strlen(src);

	while (i < n)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
		if (i == len_src)
		{
			break;
		}
	}
	dest[len_dest] = '\0';
	return (dest);
}

/**
 * _strlen - Gets the length of a string
 * @str: The string whose length is of interest
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
