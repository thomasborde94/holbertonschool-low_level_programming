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
	int i = 0;

	while (s[length] != 0)
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[length - 1 - i]);
	_putchar('\n');
}
