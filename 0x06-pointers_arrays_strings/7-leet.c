#include "main.h"

/**
 * leet - the function encodes a stirng into 1337
 *
 * @l: The string to encode
 *
 * Return: Encoded string
 */
char *leet(char *l)
{
	int a = 0, b = 0, x = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (l[a])
	{
		b = 0;

		while (b < x)
		{
			if (l[a] == r[b] || l[a] - 32 == r[b])
			{
				l[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (l);
}
