#include "main.h"
/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
