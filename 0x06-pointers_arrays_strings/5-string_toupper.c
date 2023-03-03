#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: the string to be checked and changed
 * Return: A pointer to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -=  32;
		}
		i++;
	}
	return (str);
}