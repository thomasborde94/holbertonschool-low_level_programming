0;10;1c0;10;1c#include "main.h"

/**
 * print_array - prints elements of an array
 * Description: prints n elements of an array of ints
 * @a: array to print
 * @n: numbers of elements in the array to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != n)
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar(a[i]);
	}
	_putchar('\n');
}
