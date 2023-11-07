#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: Prints the minimum number of
 * coins to make change for an amount of money.
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int numDenominations = sizeof(denominations) / sizeof(denominations[0]);
	int i = 0;

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0 && i < numDenominations)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
		i++;
	}

	printf("%d\n", coins);

	return (0);
}
