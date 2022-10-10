#include "main.h"

/**
 * print_rev - prints a string in reverse
 * Description: prints a string in reverse, then newline
 * @s: string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
