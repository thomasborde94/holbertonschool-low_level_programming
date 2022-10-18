#include <stdio.h>

/**
 * main - prints the number of arguments passed into
 * the program
 * Description: prints the number of argmuents passed into
 * the program
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
