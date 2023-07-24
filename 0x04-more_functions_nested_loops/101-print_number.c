#include "main.h"

/**
 * print_number - prints number to stdout
 * @n:number to print
 *
 * Return:void
 */
void print_number(int n)
{
	int digit, divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	while (divisor <= n)
	{
		divisor *= 10;
	}
	divisor /= 10;

	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
	}
}
