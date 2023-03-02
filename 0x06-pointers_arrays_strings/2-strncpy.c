#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: The destination
 * @src: The source 
 * @n: The limit set
 *
 * Return: Value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);

}
