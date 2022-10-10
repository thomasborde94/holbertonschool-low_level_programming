#include "main.h"

/**
 * puts_half - prints half of a string
 * Description: prints the second half of a string
 * @str: string to print second half of
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int i, x;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = length / 2;

	if (length % 2 == 1)
		n = (length - 1) / 2;

	for (i = n, i <= length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
