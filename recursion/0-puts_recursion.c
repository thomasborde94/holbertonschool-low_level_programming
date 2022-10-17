#include "main.h"

/**
 * _puts_recursion - prints a string
 * Description : prints a string followed by a newline
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
