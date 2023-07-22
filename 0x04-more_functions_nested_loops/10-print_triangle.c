#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size:height of triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			_putchar(' ');
		}

		for (j = i; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
