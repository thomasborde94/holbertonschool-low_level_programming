#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * Description: returns value of a bit at given index
 * @index: index of the bit
 * @n: int we access
 * Return: vaue of bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	result = (n >> index) & 1;
	return (result);
}
