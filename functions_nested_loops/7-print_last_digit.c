#include "main.h"

/**
 * print_last_digit - a
 * @n: integer
 * Description: gives last digit of input
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 10)
		x = x * -1;
	_putchar('0' + x);

	return (x);
}
