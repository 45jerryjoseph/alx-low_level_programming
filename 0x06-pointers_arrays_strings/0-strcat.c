#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatinating  two strings 
 * @dest: The appended to
 * @src: The source string
 *
 * Return:A pointer to resulting string dest
 */
chr *_strcat(char *dest, char *src)
{
	int len =0;
	int i;

	while (dest[len])
	{
		len++;
	}

	for (i =0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
