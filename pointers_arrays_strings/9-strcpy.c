0;10;1c0;10;1c#include "main.h"

/**
 * _strcpy - copies a string
 * Description: copies the string point to by src, including
 * the terminating null byte (\0), to the buffer pointed to
 * by dest
 * @dest: destination buffer of the copy
 * @src: source string to copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
