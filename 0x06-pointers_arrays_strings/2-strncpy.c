#include "main.h"
int _strlen(char *);

/**
 * _strncpy - copies a string
 * @dest: The buffer a string is copied to
 * @src: The source from where the string is copied.
 * @n: number of string to be copied from source to buffer.
 * Return: The content of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
