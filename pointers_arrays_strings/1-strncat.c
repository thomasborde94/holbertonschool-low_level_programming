#include "main.h"

/**
 * _strncat - concatenates two strings
 * Description: concatenates two string BUT it will use
 * at most n bytes from src, and src does not need to be
 * null-terminated if it contains n or more bytes
 * @dest: string to append to
 * @src: string to append from
 * @n: maximum bytes uses from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
