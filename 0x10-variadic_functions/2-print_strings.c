#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prompts str, followed by a new line
* @separator: str to be prompted between strs
* @n: The num of strs passed to the func
* @...: A var num of str to be prompted
* Description: If separator is NULL, it is not prompted.
* If one of the strs if NULL, (nil) is prompted instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}
