#include "main.h"

/**
 * leet - encodes a string
 * @str: the string to be encoded
 * Return: the encoded string
 */

char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 < 8; indx2++)
		{
			if ((str[indx1] == leet[indx2] || str[indx1] == leet[indx2] - 32)
			&& (((leet[indx2] >= 'a') && (leet[indx2] <= 'z'))
			|| ((leet[indx2] - 32 >= 'A') && (leet[indx2] - 32 <= 'Z'))))
			{
				str[indx1] = (indx2 + '0');
			}
		}
		indx1++;
	}
	return (str);
}
