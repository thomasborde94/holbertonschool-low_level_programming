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
	int i, j, tmp;
	char str3[200];

	while (dest[i])
	{
		str3[j] = dest[i];
		i++;
		j++;
	}

	tmp = i;
	j = tmp;
	i = 0;

	while (src[i])
	{
		str3[j] = src[i];
		i++;
		j++;
	}

	while (str3[i])
	{
		dest[i] = str3[i];
		i++;
	}

	dest[i++] = '\0';

	return (dest);
}
