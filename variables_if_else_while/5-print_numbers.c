#include  <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting 0
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 10; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
