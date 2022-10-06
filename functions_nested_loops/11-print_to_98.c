#include "main.h"

/**
 * print_to_98 - prints numbers
 * Description: prints all natural numbers from n to 98
 * @n: int to start counting from
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	printf("\n");		
}
