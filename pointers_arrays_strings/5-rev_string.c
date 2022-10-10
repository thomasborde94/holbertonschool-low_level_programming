0;10;1c0;10;1c#include "main.h"

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
	char newI;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= length / 2 - 1; i--)
	{
		newI = s[i];
		s[i] = s[length - 1 - i];
		s[length - i - 1] = newI;
	}

	_putchar('\n');
}
