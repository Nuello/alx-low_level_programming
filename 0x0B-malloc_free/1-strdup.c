#include "main.h"

/**
 * _strlen - computes the length of a string
 * @str: The address of the string.
 * Return: length of a string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strdup - copy a given string to a new string location
 * @str: Address of the string to be copied
 * Return: Address of the new string. otherwise NULL
 */

char *_strdup(char *str)
{
	int len = _strlen(str), indx;
	char *new_arr;

	new_arr = malloc(sizeof(*str) * len);
	if (new_arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (indx = 0; indx < len; indx++)
		{
			new_arr[indx] = *(str += 1);
		}
	}
	return (new_arr);
}
