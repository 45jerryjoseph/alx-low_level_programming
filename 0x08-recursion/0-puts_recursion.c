#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: The string that prints
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
		_puts_recursion(s + 1);

}
