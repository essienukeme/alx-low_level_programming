#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the product of the first two integer argument
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 1 if arguments passed in is not enough, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
