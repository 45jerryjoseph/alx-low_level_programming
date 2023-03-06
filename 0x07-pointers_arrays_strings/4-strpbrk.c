#include "main.h"
/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */
char *_strbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; acept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (NULL);
}
