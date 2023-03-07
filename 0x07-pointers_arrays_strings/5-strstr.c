#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The address of the main string
 * @needle: The address of the substring
 * Return: pointer to the beginning of the located string
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int indx1 = 0, indx2, indx3;

	while (haystack[indx1] != 0)
	{
		if (haystack[indx1] == *needle)
		{
			for (indx2 = indx1, indx3 = 0; needle[indx3] != 0;
				indx2++, indx3++)
			{
				if (needle[indx3] != haystack[indx2])
				{
					break;
				}
				else
				{
					return (haystack + indx1);
				}
			}
		}
		indx1++;
	}
	return (NULL);
}
