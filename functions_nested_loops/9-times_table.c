#include "main.h"

/**
 * times_table - prints table of 9
 * Description: print the 9 times table
 * Return: void
 */

void times_table(void)
{
	int d, i, prod;

	for (d = 0; d < 10; d++)
	{
		for (i = 0; i < 10; i++)
		{
			prod = d * i;
			if (prod <= 9)
			{
				if (i != 0)
				{
					_putchar(' ' + prod);
				}
					_putchard('0' + prod);
			}
			else
			{
				_putchar('0' + (prod / 10));
				_putchat('0' + (prod % 10));
			}
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
