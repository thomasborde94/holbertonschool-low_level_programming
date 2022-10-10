#include "main.h"

/**
 * _puts - prints a string
 * Description: ptins a string, followed by a newline
 * to stdout
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
