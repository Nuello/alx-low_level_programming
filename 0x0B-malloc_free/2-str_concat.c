#include "main.h"

/**
 * _strlen - A function that computes length of a string
 * @str: The string
 * Return: The lenght of a string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str += 1;
	}
	return (len);
}

/**
 * add_str_to_array - A function that adds a string to an array
 * @dest: Address of the array
 * @src: Address of the string
 * Return: Alway the address of the dest
 */

char *add_str_to_array(char *dest, char *src)
{
	int indx, dest_len;

	/**if (src == NULL || src == 0)
	{
		return (dest);
	}*/
	if (_strlen(dest) == 0) /*first string to be added*/
	{
		for (indx = 0; *src != 0; indx++, src += 1)
		{
			dest[indx] = *src;
		}
	}
	else if (_strlen(dest) > 0)
	{
		dest_len = (_strlen(dest));
		for (indx = dest_len; *src != 0; indx++, src += 1)
		{
			dest[indx] = *src;
		}
	}
	dest[indx] = '\0';
	return (dest);
}

/**
 * str_concat - A function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: The address to new concatenated string otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_array;
	int size;

	if (s1 == NULL && s2 == NULL)
	{
		size = 1;
	}
	else if (s1 == NULL)
	{
		size = sizeof(char) * (_strlen(s2));
	}
	else if (s2 == NULL)
	{
		size = sizeof(char) * (_strlen(s1));
	}
	else
	{
		size = (sizeof(char) * 2) * (_strlen(s1) + _strlen(s2));
	}

	/*new_array = malloc((sizeof(char) * 2) * ((len1 + len2) - 2))*/;
	new_array = malloc(size);
	if (new_array == NULL)
	{
		return (NULL);
	}
	else
	{
		add_str_to_array(new_array, s1);
		add_str_to_array(new_array, s2);
	}
	return (new_array);

	/**if (s1 != NULL && s2 != NULL)
	{
		len1 = _strlen(s1);
		len2 = _strlen(s2);
		new_array = malloc((sizeof(char) * 2) * ((len1 + len2) - 2));
		if (new_array == NULL)
		{
			return (NULL);
		}
		else
		{
			add_str_to_array(new_array, s1);
			add_str_to_array(new_array, s2);
		}
	}*/
}
