#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * Description: prints a diagonal line with '\'
 * @n: is the number of time '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, k;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(32);
		}
		_putchar(92);
	}
	_putchar('\n');
}
