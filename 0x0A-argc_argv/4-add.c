#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: Adds positive numbers and prints the result.
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("ERROR\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("ERROR\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
