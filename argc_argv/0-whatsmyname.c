#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */


int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
