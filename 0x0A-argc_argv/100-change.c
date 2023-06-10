#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argv: argument vector
 * @argc: argument count
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int cents, i, change;

	int coins[] = {25, 10, 5, 2, 1};

	cents = atoi(argv[1]);
	change = 0;

	if (cents <= 0)
		printf("0\n");
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2 && cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (cents >= coins[i])
			{
				change++;
				cents -= coins[i];
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
