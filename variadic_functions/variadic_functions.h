#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct format - Structure of a format specifier and corresponding function.
 * @c: Format specifier of the type of data to be processed.
 * @form: Function pointer to corresponding function processing the data.
 *
 * Description: This structure associate format specifiers with functions
 *				in variadic functions in order to process various types
 *				of data with the provided format specifier.
 *				The c member corresponds to the format specifier
 *				and the format member is a function pointer
 *				poiting to the function that will process the data of that type.
 */
typedef struct format
{
	char *c;
	void (*form)(va_list);
} form_t;

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
