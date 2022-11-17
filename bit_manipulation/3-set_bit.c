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
	int mask = 1 << index;

	return ((n & ~mask) | (1 << index));
}
