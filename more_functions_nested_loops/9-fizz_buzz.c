#include "main.h"

/**
 * fizz_buzz - prints numbers from 1 to 100 with exceptions
 * Description: prints from 1 to 100, where 3 multiples are replaced with
 * Fizz, 5 replaced with Buzz, and both by FizzBuzz
 * Return: void
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
}
