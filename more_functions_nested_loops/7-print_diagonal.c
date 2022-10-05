#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * Description: prints a diagonal line with '\'
 * @n: is the number of time '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			_putchar(32);
			i++;
		}
		if (i == n - 1)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}