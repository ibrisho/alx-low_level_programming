#include "main.h"


/**
 * print_binary - prints binary representation of a number
 * @n: input number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int c = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	c = n & 0x01;
	print_binary(n >> 1);
	_putchar(c + '0');
}
