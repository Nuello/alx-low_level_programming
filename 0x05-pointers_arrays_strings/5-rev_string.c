#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
}
