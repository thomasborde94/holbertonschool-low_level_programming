#include "main.h"

/**
 * times_table - prints the 9 times table
 * Description: print the 9 times table
 * Return: void
 */

void times_tables(void)
{
	int d, i, prod = i * d;

	for (d = 0; d < 10; d++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar('0' + prod);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
}
