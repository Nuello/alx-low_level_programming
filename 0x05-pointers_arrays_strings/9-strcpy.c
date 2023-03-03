#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer
 * pointed to by dest
 * @dest: The address the string is to be copied to
 * @src: The source of the string
 * Return: The copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
