#include <stdio.h>

void _putchar(void)
{
	printf("_putchar\n");
	return;
}

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return;
}
