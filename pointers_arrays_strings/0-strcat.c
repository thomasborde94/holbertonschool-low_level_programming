#include "main.h"

/**
 * _strcat - appends two strings
 * Description: appends src string to dest string
 * @dest: string to append to
 * @src: string to append from
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
