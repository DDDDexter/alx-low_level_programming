#include "main.h"

/**
* _pow_recursion - ret val of x rais to the pow of y
* @x: val to ris
* @y: power
*
* Return: pow res
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
