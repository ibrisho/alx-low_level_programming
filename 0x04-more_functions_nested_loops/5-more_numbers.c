#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j, tens, ones;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			tens = i / 10;
			ones = i % 10;

			if (tens > 0)
			{
				_putchar(tens + '0');
			}

			_putchar(ones + '0');
		}

		_putchar('\n');
	}
}
