#include "main.h"


/**
 * is_digit - checks for digits
 * @c: input character to check for digit
 * Return: 0 failure, 1 success
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**
 * isDigitString - checks if string is digit
 * @str: pointer to string to check
 *
 * Return: 1 if digit 0 if not
 */
int isDigitString(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!is_digit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!isDigitString(n1) && !isDigitString(n2))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
