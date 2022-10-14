#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals
 * Description: prints the sum of two diagonals of a
 * square matrix of ints
 * @a: the 2D array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;

	for (i = 0; i < size * size; i++)
	{
		sum1 += a[i];
		i += size;
	}

	printf("%d\n", sum1);
}
