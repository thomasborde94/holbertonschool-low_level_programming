#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 * Description: prints alphabet 10 times
 * Return: always 0
 */

int print_alphabet_x10(void)
{
	int ch, x = 0;

	while (x < 5)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
		x++;
	}
	return (0);
}
