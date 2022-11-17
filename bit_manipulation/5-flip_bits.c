#include "main.h"

unsigned int countSetBits(unsigned int n);

/**
 * flip_bits - returns number of bits you would need to flip
 * to get from one number to another
 * Description: returns number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip to get from
 * one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}

/**
 * countSetBits - counts number of bits
 * Description: counts number of bits
 * @n: int to count
 * Return: number of bits
 */

unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
