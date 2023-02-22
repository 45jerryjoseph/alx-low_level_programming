#include "main.h"

/**
 * _abs -used to compute absolute value of Integer.
 * @n: is the number to compute.
 *
 * Return: Absolute value of number of zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;

		return (abs);
	}

	return (n);
}
