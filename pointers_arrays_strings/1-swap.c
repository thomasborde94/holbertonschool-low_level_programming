#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * Description: swaps the values of ints a and b
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
