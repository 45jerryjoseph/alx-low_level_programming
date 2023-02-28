#include "main.h"

/**
 * swap_int - we are swapping two values
 * @x: integer to swap
 * @y: integer to swap with
 *
 * Return:void
 */
void swap_int(int *x, int *y)
{
	int swap;

	swap = *x;
	*x = *y;
	*y = swap;
}
