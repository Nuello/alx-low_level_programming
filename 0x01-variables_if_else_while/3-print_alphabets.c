#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char s_letter = 'a', c_letter = 'A';

	while (s_letter <= 'z')
	{
		putchar(s_letter);
		s_letter++;
	}
	while (c_letter <= 'Z')
	{
		putchar(c_letter);
		c_letter++;
	}
	putchar('\n');
	return (0);
}
