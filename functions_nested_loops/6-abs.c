#include "main.h"

/**
 * _abs - a
 * @n: integer
 * Description: checks input is negative or positive of nul
 * Return: 1 if c is positive, -1 if negative, 0 otherwise
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
}
