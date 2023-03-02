#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words
 *
 * @p: string that we capitalize its words
 */

char *cap_string(char *p)
{
	int i = 0;

	while (p[i])
	{
		while (!(p[i] >= 'a' && p[i] <= 'z'))
			i++;

		if (p[i - 1] == ' ' ||
		    p[i - 1] == '\t' ||
		    p[i - 1] == '\n' ||
		    p[i - 1] == ',' ||
		    p[i - 1] == ';' ||
		    p[i - 1] == '.' ||
		    p[i - 1] == '!' ||
		    p[i - 1] == '?' ||
		    p[i - 1] == '"' ||
		    p[i - 1] == '(' ||
		    p[i - 1] == ')' ||
		    p[i - 1] == '{' ||
		    p[i - 1] == '}' ||
		    i == 0)
			p[i] -= 32;

		i++;
	}

	return (p);
}
