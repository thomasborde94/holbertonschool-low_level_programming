#include "main.h"

/**
 * _calloc - selfmade calloc function
 * Description: allocates memory and initializes to 0
 * @nmemb: number of elements of the array
 * @size: size of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory = malloc(size * nmemb);
	char *tmp;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	tmp = memory;

	for (i = 0; i < nmemb * size; i++)
	{
		tmp[i] = '\0';
	}

	if (memory == NULL)
		return (NULL);

	return (memory);
}
