#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
