#include "main.h"

/**
 * _memset - changes value of bytes
 * Description: copies the value of b into each
 * of the first n characters of the object pointed to
 * by s
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer with new values
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
