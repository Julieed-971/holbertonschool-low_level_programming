#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	{
		printf("%d\n", mul);
		return (0);
	}
}
