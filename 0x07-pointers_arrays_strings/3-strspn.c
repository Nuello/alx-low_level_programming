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
	char *temp = accept;

	while (*s)
	{
		for (accept = temp; *accept != 0; accept++)
		{
			if (*accept == *s)
			{
				count++;
				break;
			}
		}
		s++;
	}
	count = (count) * size;
	return (count);
}
