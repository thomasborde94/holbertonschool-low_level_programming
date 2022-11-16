#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * Description: converts from binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	long unsigned int base = 1, reste, decimal = 0, i = 0, binary;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
	}

	binary = atoi(b);
	while (binary > 0)
	{
		reste = binary % 10;
		decimal  = decimal + (reste * base);
		binary /= 10;
		base *= 2;
	}
	return (decimal);
}
