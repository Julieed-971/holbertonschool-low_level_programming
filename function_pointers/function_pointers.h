#ifndef FUNCTION_POINTERS_H
#define FUNCTION_FOINTERS_H
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
