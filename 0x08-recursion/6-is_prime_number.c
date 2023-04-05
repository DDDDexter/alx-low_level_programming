#include "main.h"

int actual_prime(int n, int i);

/**
* is_prime_number - int prime or !
* @n: int to check
*
* Return: 1 if = prime int, 0 if !
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
* actual_prime - calc int = prime recursiv
* @n: int to check
* @i: iterator
*
* Return: 1 if n is prime, 0 if not
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
