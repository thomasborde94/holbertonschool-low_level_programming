#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * Description: prints strings, followed by newline
 * @separator: string to print between strings
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	for (i = 0; i < n; i++)
	{
		if (!va_arg(args, char *))
			printf("(nil)");
		else
			printf("%s", va_arg(args, char*));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
