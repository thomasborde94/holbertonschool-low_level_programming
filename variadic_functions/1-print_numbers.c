#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * Description: prints numbers, followed by newline
 * @separator: string to print between numbers
 * @n: number of ints to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		printf("%s", separator);
	}
	va_end(args);
}
