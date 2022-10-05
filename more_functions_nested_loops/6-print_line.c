#include "main.h"

/**
 * print_line - draws a line
 * Description: draws a line in the terminal
 * @n: number of time the _ is drawn
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
