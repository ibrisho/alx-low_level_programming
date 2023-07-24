#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s:pointer to string to find length of
 *
 * Return:length of the string
 */
int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
