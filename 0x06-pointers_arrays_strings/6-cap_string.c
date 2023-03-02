#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words
 *
 * @p: string that we capitalize its words
 */

char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (p[i] >= 97 && p[i] <= 122)
			{
				p[i] -= 32;
				continue;
			}
		}
		if (p[i] == 32 ||
		    p[i] == '\t'||
		    p[i] == '\n'||
		    p[i] == ',' ||
		    p[i] == ';' ||
		    p[i] == '.' ||
		    p[i] == '!' ||
		    p[i] == '?' ||
		    p[i] == '"' ||
		    p[i] == '(' ||
		    p[i] == ')' ||
		    p[i] == '{' ||
		    p[i] == '}')
		{
			++i;

			if (p[i] >= 97 && p[i] <= 122)
			{
				p[i] -= 32;
				continue;
			}
		}
		else
		{
			if (p[i] >= 65  && p[i] <= 90)
			{
				p[i] += 32;
			}
		}
	}

	return (p);
}
