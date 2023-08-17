#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all it's parameters
 * @n:The number of paramters passed to the function
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
