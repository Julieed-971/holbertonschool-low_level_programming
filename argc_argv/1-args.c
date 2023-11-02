#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
