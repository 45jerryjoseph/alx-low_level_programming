#include "main.h"
#include <string.h>
/**
 * rot13 - encodes a string using rot13
 * @p: input string
 *
 * Return: encoded string
 */

char *rot13(char *p)
{
	int j = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	while (p[j])
	{
		i = 0;

		while (i < 53)
		{
			if (p[j] == alphabet[i] || p[j] - 32 == alphabet[i])
			{
				p[j] = rot13[i];
			}

			i++;
		}
		
		j++;
	}

	return (p);
}
