#include "main.h"

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
			if (atoi(argv[indx]) == 0)
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
