#include "main.h"

/**
 * _strncat - concatenates destination string with n bytes from source string
 * @dest:pointer to destination string
 * @src:pointer to source string
 * @n:bytes to be copied
 *
 * Return:pointer to destination string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
