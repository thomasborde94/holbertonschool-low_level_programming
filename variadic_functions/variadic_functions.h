#ifndef VARIADIC
#define VARIADIC
#include <stdlib.h>
#include <stdio.h>

/**
 * struct pa - struct for print all
 * Description: struct containing the type to print
 * and the associated va_arg call
 * @type: type of data
 * @va: va_arg call
 */

typedef struct pa {
	char type;
	void (*f)(va_list args);
} pa;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned n, ...);
void print_all(const char * const format, ...);

#endif
