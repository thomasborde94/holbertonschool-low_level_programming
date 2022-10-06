#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: prints a triangle of size size
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if ((size - k) > i)
			{
				_putchar(' ');
			}
			if (k == i)
				_putchar('#');
		}	
		_putchar('\n');
	}
}
