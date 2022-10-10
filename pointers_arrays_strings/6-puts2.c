#include "main.h"

/**
 * puts2 - prints every other character of a string
 * Description: prints every other character of a string
 * @str: string to use
 * Return: void
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '0')
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
