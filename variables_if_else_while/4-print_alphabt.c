#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 69 || ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
