#include "main.h"

/**
 * more_numbers - prints numbers
 * Description: prints 10 times the numbers, from 0 to 14, + a new line
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
