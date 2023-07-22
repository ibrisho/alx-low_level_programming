#include "main.h"

/**
 * print_line - prints "_" to stdout
 * @n:number of _ to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
