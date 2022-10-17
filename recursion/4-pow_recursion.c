#include "main.h"

/**
 * _pow_recursion - returns the value of x raised
 * to the power of y
 * Description: returns the value of x raised
 * to the power of y
 * @x: int we want to raise to the power of y
 * @y: power int we want to raise x
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	res = x ^ y;
	return (res);
}
