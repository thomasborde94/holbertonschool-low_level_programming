#include "main.h"

/**
 * array_range - creates an array from min to max
 * Description: creates an array from min to max
 * containing values from min to max
 * @min: minimum int
 * @max: maximum int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	return(array);
}
