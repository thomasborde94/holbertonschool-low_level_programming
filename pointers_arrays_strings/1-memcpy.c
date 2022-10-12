#include "main.h"

/**
 * _memcpy - copies bytes from src to dest
 * Description: copies n bytes from memory are
 * src to memory area dest
 * @dest: the memory area to copy the bytes to
 * @src: the memory area to copy the bytes from
 * @n: the number of bytes to copy
 * Return: a pointer to changed dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
