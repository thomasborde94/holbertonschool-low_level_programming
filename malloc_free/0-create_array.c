#include "main.h"

/**
 * create_array - creates an array of char
 * Description: creates an array of char initialized with c
 * @size: size of the array
 * @c: character to initialize the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
