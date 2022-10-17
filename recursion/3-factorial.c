#include "main.h"

/**
 * factorial - return factorial of given number
 * Description: returns factorial of given number
 * @n: number to get factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);

	return factorial(n - 1);
}
