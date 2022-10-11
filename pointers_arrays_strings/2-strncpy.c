#include "main.h"

/**
 * _strncopy - copies a string
 * Description: copies a string to dest
 * @dest:This is the pointer to the destination array where the content
 * is to be copied.
 * @src: This is the string to be copied.
 * @n: The number of characters to be copied from source.
 * Return: string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
