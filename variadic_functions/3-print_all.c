#include <stdarg.h>
#include "variadic_functions.h"

/**
 * va_argC - print character
 * Description: prints character
 * @args: va_list to go through
 * Return: void
 */

void va_argC(va_list args)
{
	int c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * va_argI - print int
 * Description: prints integer
 * @args: va_list to go through
 * Return: void
 */

void va_argI(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}

/**
 * va_argF - prints float
 * Description: prints float
 * @args: va_list to go through
 * Return: void
 */

void va_argF(va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * va_argS - prints string
 * Description: prints string
 * @args: va_list to go through
 * Return: void
 */

void va_argS(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anyting
 * Description: prints anything
 * @format: list of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;

	pa pas[] = {
		{"c", va_argC},
		{"i", va_argI},
		{"f", va_argF},
		{"s", va_argS},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;

	va_start(args, format);

	while (format[i])
	{
		j = 0;
		{
			if (*(pas[j].type) == format[i])
				pas[i].f(args);
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
