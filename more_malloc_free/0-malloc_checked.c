#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * Description: allocates memory using malloc
 * @b: size of memory allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
