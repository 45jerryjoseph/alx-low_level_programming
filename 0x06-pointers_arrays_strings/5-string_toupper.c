#include "main.h"
/**
 * string_toupper - This function will replace all lowercase letters in string
 * @str: The string to be checked for lowercase letters
 *
 * Return: The resulting string str, will be in uppercase
 */
char *string_toupper(char *str)
{
	int i =  0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32
		}
		
		i++;
	}
	return (str);
}
