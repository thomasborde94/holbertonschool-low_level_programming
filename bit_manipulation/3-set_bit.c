#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 given a index
 * Description: sets the value of a bit to 1 given a index
 * @n: int to change
 * @index: index of the bit to change
 * Return: 1 if it worked, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = ((*n & ~mask) | (1 << index));

	return (1);
}
