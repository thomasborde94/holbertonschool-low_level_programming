#include "main.h"

/**
 * print_numbers - prints numbers
 * Descriptionn: prints numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar('0' + i);
		if (i == 57)
			_putchar('\n');
	}
}
