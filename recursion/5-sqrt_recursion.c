#include "main.h"


int find_square_root(int n, int guess);

/**
 * _sqrt_recursion - returns natural square root of n
 * Description: returns natural square root of n
 * @n: int we search the square root of
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (find_square_root(n, 1));
}

/**
 * find_square_root - finds square root of n
 * Description: finds square root of n
 * @n: int we search square root of
 * @guess: iterate int
 * Return: natural square root
 */

int find_square_root(int n, int guess)
{
	int res = guess * guess;

	if (res == n)
		return (guess);

	if (res > n)
		return (-1);

	return (find_square_root(n, guess + 1));
}
