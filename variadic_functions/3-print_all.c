#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * Description: prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		switch (format[i])
		{
		case "c" :
			prinft("%c", va_arg(args, int));
			break;
		case "i" :
			printf("%d", va_arg(args, int));
			break;
		case "f" :
			printf("%f", va_arg(args, double));
			break;
		case "s" :
			printf("%s", va_arg(args, char *));
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
