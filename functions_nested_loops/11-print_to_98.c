#include "main.h"

/**
 * print_to_98 - prints numbers
 * Description: prints all natural numbers from n to 98
 * @n: int to start counting from
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; n <= 98; i++)
	{
		if (i > 9)
		{
			_putchar('0' + (i / 10));
		}
		_putchar('0' + (i % 10));
	}
}
