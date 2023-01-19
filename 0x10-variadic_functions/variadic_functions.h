#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char ch);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - data type of a format
 * @op: format
 * @f: function
 */

typedef struct format
{
	char *op;
	void (*f)(va_list all);
} f;
#endif
