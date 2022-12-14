#include <stdarg.h>

/**
 * sum_them_all - adds ints
 * Description: adds ints
 * @n: number of int to add
 * Return: sum of ints
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
