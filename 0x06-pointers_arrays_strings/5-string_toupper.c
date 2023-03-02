#include "main.h"


/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @d: The string will be modified
  *
  * Return: uppercase letters
  */
char *string_toupper(char *d)
{
	int i = 0;

	while (d[i])
	{
		if (d[i] >= 97 && d[i] <= 122)
		{
			d[i] -= 32;
		}

		i++;
	}

	return (d);
}
