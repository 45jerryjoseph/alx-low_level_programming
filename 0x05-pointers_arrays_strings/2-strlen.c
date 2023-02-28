#include "main.h"

/**
 * _strlen - leght of a string
 * @s: string we are to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
