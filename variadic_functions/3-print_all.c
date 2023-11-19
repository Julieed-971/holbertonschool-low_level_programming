#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * form_char- print a character
 * @args: pointer to the argument list
 */

void form_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * form_int - print an integer
 * @args: pointer to the argument list
 */

void form_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * form_float - print a float
 * @args: pointer to the argument list
 */

void form_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * form_str - print a string
 * @args: pointer to the argument list
 */

void form_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: list of types
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *sep = "";
	va_list args;

	struct form table[] = {
		{"c", form_char},
		{"i", form_int},
		{"f", form_float},
		{"s", form_str},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *table[j].c)
			{
				printf("%s", sep);
				table[j].format(args);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");

	va_end(args);
}
