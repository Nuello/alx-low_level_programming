#include "main.h"

/**
 * main - Multiples two numbers
 * @argc: the number of arguments passed
 * @argv: A vector containing all the string passed
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
