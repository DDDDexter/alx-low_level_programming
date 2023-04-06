#include "main.h"
/**
* _print_rev_recursion - Prompt a str in rev.
* @s: str to prompt.
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
