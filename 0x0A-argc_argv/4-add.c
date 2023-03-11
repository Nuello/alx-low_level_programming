#include "main.h"

/**
 * _isalnum - checks a string if it contains alphabet and numbers
 * @str: A pointer to the string whose length is required
 * Return: 0 (Success) 1 otherwise
 */

int _isalnum(char *str)
{
	int indx, len = strlen(str);

	for (indx = 0; indx < len; indx++)
	{
		if (!(str[indx] >= '0' && str[indx] <= '9'))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: The number of arguments passed
 * @argv: the vector holding the string passed
 * Return: 0 (Success) otherwise (1)
 */

int main(int argc, char *argv[])
{
	int indx, sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}
	else
		for (indx = 1; indx < argc; indx++)
		{
			if (atoi(argv[indx]) == 0 || _isalnum(argv[indx]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[indx]);
			}
		}
	printf("%d\n", sum);
	return (0);
}
