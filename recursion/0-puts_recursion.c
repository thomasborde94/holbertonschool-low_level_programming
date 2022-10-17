0;10;1c0;10;1c#include "main.h"

/**
 * _puts_recursion - prints a string
 * Description : prints a string followed by a newline
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s++);
	}

	else
		_putchar('\n');
}
