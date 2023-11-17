#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - calculate with two int input
 * @argc: number of the argument
 * @argv: array of arguments
 *
 * Return: a int of the result of the operation
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(op) != 1 || strcmp(op, ".") == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' ||  op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(op))(a, b));
	return (0);
}

