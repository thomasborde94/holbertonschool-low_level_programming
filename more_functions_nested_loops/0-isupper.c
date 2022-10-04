#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: integer to check
 * Description: checks if input is uppercase
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
