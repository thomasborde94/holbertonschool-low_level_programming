#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description: prints alphabet lowercase
 * Return: always 0
 */

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
