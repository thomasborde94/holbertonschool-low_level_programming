#include "main.h"

/**
 * _abs - a
 * @n: integer
 * Description: get the absolute value of n
 * Return: always 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d", n * -1);
	}
	return (0);
}
