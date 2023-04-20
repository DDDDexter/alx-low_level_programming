#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prompt nums, followed by a new line
* @separator: The str to be prompted between nums
* @n: The num of ints passed to the func
* @...: A var num of nums to be prompted
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	unsigned int i;

	va_start(digits, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digits, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
