#include "main.h"

/**
 * islower - a
 * Description: checks for lowercase character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else return (0);
}
		       
