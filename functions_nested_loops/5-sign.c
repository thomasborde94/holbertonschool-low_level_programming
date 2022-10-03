#include "main.h"

/**
 * print_sign - a
 * @n: integer
 * Description: checks input is negative or positive of nul
 * Return: 1 if c is positive, -1 if negative, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
