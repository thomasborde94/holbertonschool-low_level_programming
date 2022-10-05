#include "main.h"

/**
 * print_line - draws a line
 * Description: draws a line in the terminal
 * @n: number of time the _ is drawn
 * Return: void
 */

void print_line(int n)
{
	int i;

	while (i <= n)
	{
		_putchar(95);
	}
	if (i <= 0)
		_putchar('\n');
}
