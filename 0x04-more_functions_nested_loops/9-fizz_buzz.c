#include "main.h"

/**
 * main - prints numbers from 1 to 100, print fizz for multiples of 3,
 * buzz for multiples of 5 and fizzbuzz for multiples of 3 and 5
 * Return: 0(Success)
 */

int main(void)
{
	int num = 1;

	for (; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
		printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
