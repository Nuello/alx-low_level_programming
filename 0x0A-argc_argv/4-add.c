#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: the vector containing the arguments passed
 * Return: 0 (Success) otherwise (1)
 */

int main(int argc, char *argv[])
{
	int indx, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (1);
	}
	for (indx = 1; indx < argc; indx++)
	{
		if (!(atoi(argv[indx])))
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
