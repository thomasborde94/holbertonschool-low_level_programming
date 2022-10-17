#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of n
 * Description: returns natural square root of n
 * @n: int we search the square root of
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int guess = 1;

	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	if (guess * guess <= n)
	{
		guess++;
		guess = _sqrt_recursion(n);
	}

	else
		return (-1);
}
