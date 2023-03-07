#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string in which the bytes is searched
 * @accept: The byte to be searched
 * Return: A pointer to the string byte
 */

char *_strpbrk(char *s, char *accept)
{
	int check = 1;
	char *temp;

	temp = accept;
	while ((*s != 0) && check)
	{
		for (accept = temp; *accept != 0; accept++)
		{
			if (*s == *accept)
			{
				return (s);
				check = 0;
				break;
			}
		}
		s++;
	}
	return (NULL);
}
