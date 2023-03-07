#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: The address of the array to hold the copy
 * @src: The address of the string to be copied
 * @n: The number of element to be copied
 * Return: Always The dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int indx;

	for (indx = 0; src[indx] != 0 && indx < n; indx++, dest++)
	{
		*dest = src[indx];
	}
	*dest = '\0';
	return (dest);
}
