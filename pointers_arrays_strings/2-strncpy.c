#include "main.h"

/**
 * _strncpy - copies a string
 * Description: copies a string to dest
 * @dest:This is the pointer to the destination array where the content
 * is to be copied.
 * @src: This is the string to be copied.
 * @n: The number of characters to be copied from source.
 * Return: string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (src[length])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = length; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
