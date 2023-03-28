#include "main.h"
/**
* _puts - prompts a str, to the std output
* @str: string to prompt
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
