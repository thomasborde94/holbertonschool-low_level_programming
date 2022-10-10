#include "main.h"

/**
 * rev_string - reverses a string
 * Description: reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char newi;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		newi = s[i];
		s[i] = s[length - 1 - i];
		s[len - i - 1] = newi;
	}

	_putchar('\n');
}
