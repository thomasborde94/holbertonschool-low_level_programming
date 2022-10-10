#include "main.h"

/**
 * print_array - prints elements of an array
 * Description: prints n elements of an array of ints
 * @a: array to print
 * @n: numbers of elements in the array to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n -1)
			continue;

		printf(", ");
	}
	_printf("\n");
}
