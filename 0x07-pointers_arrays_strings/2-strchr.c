#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The address of the string to check
 * @c: The character to locate in a string
 * Return: A pointer to the first occurence of the string or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	*s = '\0';
	return (NULL);
}
