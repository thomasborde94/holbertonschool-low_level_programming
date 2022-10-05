#include "main.h"

/**
 * print_square - prints a square
 * Description: prints a square with # of size size
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
