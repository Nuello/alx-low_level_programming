#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of argument passed.
 * @argv: A vector holding the string passed
 * Return: 0 (Success) otherwise (-1).
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
