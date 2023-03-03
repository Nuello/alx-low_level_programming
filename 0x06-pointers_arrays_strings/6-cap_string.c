#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: Always capitalized string
 */

char *cap_string(char *str)
{
	char separ[] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}' };
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[i - 1] == separ[j]) && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			if (str[i] == '\t')
			{
				str[i] = ' ';
			}
		}
	}
	return (str);
}

/*char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if( (str[i - 1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n' 
		|| str[i-1] == ',' || str[i-1] == ';' || str[i-1] == '.' 
		|| str[i-1] == '!' || str[i-1] == '?' || str[i-1] == '"' 
		|| str[i-1] == '(' || str[i-1] == ')' || str[i-1] == '{' 
		|| str[i-1] == '}' || i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		if (str[i - 1] == '\t')
		{
			str[i-1] = 32;
		}
		i++;
	}
	return (str);
}*/
