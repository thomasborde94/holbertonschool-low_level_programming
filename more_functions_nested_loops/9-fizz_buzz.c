#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * Description: prints from 1 to 100, where 3 multiples
 * are replaced by Buzz, 5 by Fizz, and both by FizzBuzz
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i != 100))
		{
			printf("Buzz ");
		}
		else if ((i % 5 == 0) && (i == 100))
			printf("Buzz");
		else
			printf("%d ", i);
	}
	printf('\n');
	return (0);
}

