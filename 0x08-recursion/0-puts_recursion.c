#include "main.h"
/**
* _puts_recursion - a func as puts
* @s: input
* Return: Al 0 (Suc)
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
