#include "main.h"
/**
* swap_int - swaps the values of two ints
* @x: integer to swap
* @y: integer to swap
*/
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
