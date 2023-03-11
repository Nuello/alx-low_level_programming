#include "main.h"

/**
 * change_cal - prints the minimum number of coins to make change for an amt
 * @cents: the amount of cents to be given in coin
 * Return: Always void
 */

void change_cal(int cents)
{
	int coin_count = 0, indx = 0, coins[] = {25, 10, 5, 2, 1};

	while (coins[indx] && cents > 0)
	{
		while (cents >= coins[indx])
		{
			coin_count++;
			cents -= coins[indx];
		}
		indx++;
	}
	printf("%d\n", coin_count);
}

/**
 * main - Calls change function and pass in the required parameter from user
 * input argument.
 * @argc: Argument count.
 * @argv: The vector containing the string passed
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		change_cal(change);
	}
	return (0);
}
