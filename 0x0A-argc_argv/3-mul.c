#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int mul, i;

	mul = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	
	else if(argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
