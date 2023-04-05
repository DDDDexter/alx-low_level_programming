#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - ret nat sqr root of int
* @n: num to calc the sqr root of
*
* Return: res sqr root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - recr to . nat
* square root of int
* @n: int to calc the sqr root of
* @i: iter
*
* Return: res sqr root
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
