#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Ret sum of all its params
* @n: The numb of params passed to the func
* @...: A var num of param to calculate the sum of.
* Return: If n == 0 - 0.
*         Otherwise - the sum of all params
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int z, sum = 0;

	va_start(all, n);

	for (z = 0; z < n; z++)
		sum += va_arg(all, int);

	va_end(all);

	return (sum);
}
