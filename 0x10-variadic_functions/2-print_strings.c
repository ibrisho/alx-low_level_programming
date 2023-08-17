#include "variadic_functions.h"
/**
 * print_strings - prints input strings followed by new line
 * @separator: string to separate each printed string
 * @n: number of input strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char*);
		printf("%s", temp ? temp : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
