#include "main.h"

/**
 * swap_int - swaps two integers pointed to by a and b
 * @a:pointer to first number to swap
 * @b:pointer to second number to swap
 *
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
