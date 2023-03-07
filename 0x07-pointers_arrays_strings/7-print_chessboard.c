#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: point to an array name
 * Return: Always void.
 */

void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	for (indx1 = 0; indx1 < 8; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
		{
			_putchar((a[indx1][indx2]));
		}
		_putchar('\n');
	}
}
