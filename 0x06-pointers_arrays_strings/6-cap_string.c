#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: Always capitalized string
 */

char *cap_string(char *str)
{
	char separ[] = {' ','	','\n',',',';','.','!','?','"','(',')','{','}' };
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == '\n')
			{
				_putchar('\n');
			}
			if (str[i] == separ[j])
			{
				str[i + 1] = str[i] + 32;
			}
		}
	}
	return (str);
}
