#include "main.h"

/**
* factorial - ret fact of int
* @n: int to ret
* Return: fact of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
