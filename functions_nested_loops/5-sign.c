#include "main.h"

/**
 * sign - a
 * @n: integer
 * Description: checks input is negative or positive of nul
 * Return: 1 if c is positive, -1 if negative, 0 otherwise
 */

int sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	if (n < 0)
	{
		printf("-1\n");
		return (-1);
	}
}
