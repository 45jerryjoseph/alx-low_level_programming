#include "main.h"

/**
 * _strncat - Concatination of two strings
 * @dest: The destination
 * @src: The source
 * @n: Limit of concatination
 *
 * Return: A pointer to a resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1] = '\0';
	return (dest);
}
