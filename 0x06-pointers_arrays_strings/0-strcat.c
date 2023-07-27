#include "main.h"

/**
 * _strcat - concatenates source string to destination string
 *@dest:pointer to destination string
 *@src:pointer to source string
 *
 * Return:pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*result != '\0')
	{
		result++;
	}

	while (*src != '\0')
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';
	return (dest);
}
