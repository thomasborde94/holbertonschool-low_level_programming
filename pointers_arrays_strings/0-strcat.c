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
	int i;
	int length = 0;

	while (dest[length])
		length++;

	for (i = 0; src[i]; i++)
	{
		dest[length] = src[i];
		length++;
	}

	return (dest);
}
