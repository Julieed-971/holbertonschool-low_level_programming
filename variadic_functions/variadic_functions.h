#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct form - structure for format to print
 *
 * @c: first argument
 * @format: function associated
 */
typedef struct form
{
	char *c;
	void (*format)(va_list);
} format;

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
