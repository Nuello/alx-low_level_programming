#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void)
{
	int a = 48, b = 49;

	while (a <= 56 && b <= 57)
	{
		for (; b <= 57 ; b++)
		{
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
		b = a + 1;
	}
	return (0);
}
