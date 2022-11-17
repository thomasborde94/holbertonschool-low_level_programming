#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 given an index
 * Description: sets the value of a bit to 0 given an index
 * @n: int to change
 * @index: index of the bit to change
 * Return: 1 if it worked, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = ((*n & ~mask) | (0 << index));

	return (1);
}
