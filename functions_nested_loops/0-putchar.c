#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar
 * Return: Always 0
 */

int main(void)
{
	char str[];
	int i;

	str = "_putchar\n";
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
