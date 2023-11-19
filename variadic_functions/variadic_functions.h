#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct form - structure of a format specifier and its corresponding function
 *
 * @c: format specifier
 * @format: function pointer to the corresponding function
 */
struct form
{
	char *c;
	void (*format)(va_list);
};

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void form_char(va_list args);
void form_int(va_list args);
void form_float(va_list args);
void form_str(va_list args);
#endif
