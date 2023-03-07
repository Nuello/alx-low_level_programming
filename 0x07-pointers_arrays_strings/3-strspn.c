#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The address of the string to check for the length of substring
 * @accept: The substring whose length is determined
 * Return: The length of the substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, size = sizeof(*s);
	char *temp = s;

	while (*accept)
	{
		for (s = temp; *s != 0; s++)
		{
			if (*accept == *s)
			{
				count++;
				break;
			}
		}
		accept++;
	}
	count = (count + 1) * size;
	return (count);
}
