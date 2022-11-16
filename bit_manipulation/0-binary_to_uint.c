#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * Description: converts from binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, decimal = 0, i = 0;
	int length = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
	}

	for (length = 0; b[i]; i++)
		length++;

	for (length = length - 1; length >= 0; length--)
	{
		decimal += (b[length] - '0') * base;
		base *= 2;
	}
	return (decimal);
}
