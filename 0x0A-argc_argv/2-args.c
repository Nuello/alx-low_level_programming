#include "main.h"

/**
 * main - prints all arguments it recieves.
 * @argc: count of all the argument passed
 * @argv: vector holding string of all argument passed
 * Return: 0 (Success).
 */

int main(int argc, char **argv)
{
	int indx;

	for (indx = 0; indx < argc; indx++)
	{
		printf("%s\n", argv[indx]);
	}
	return (0);
}
