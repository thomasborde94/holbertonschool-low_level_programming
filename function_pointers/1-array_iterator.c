#include "function_pointers.h"

/**
 * array_iterator - executes a function given on each
 * element of an array
 * Description: executes a function given on each
 * element of an array
 * @array: array to executes function to each element
 * @size: size of the array
 * @action: function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(i);
	}
}
