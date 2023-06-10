#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, sum, err;

	sum = 0;

	if (argc == 1)
	{
		err = 1;
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			err = 1;
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	if (!err)
		printf("%d\n", sum);
	return (0);
}
