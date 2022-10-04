#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: integer to check
 * Description: checks if input is a digit
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
