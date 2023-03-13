#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char.
 * @size: The size of the array to create.
 * @c: The char to fill the array.
 * Return: pointer to the array. Otherwise NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int indx = 0;
	char *arr_addrs;

	arr_addrs = malloc(sizeof(c) * size);
	{
		if (arr_addrs == NULL || size == 0)
		{
			return (NULL);
		}
		else
		{
			while (indx < size)
			{
				arr_addrs[indx] = c;
				indx++;
			}
		}
	}
	return (arr_addrs);
}
