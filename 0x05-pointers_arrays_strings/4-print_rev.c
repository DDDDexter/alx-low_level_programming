#include "main.h"
/**
* print_rev - prompt a reverse str
* @s: string
* return: 0
*/
void print_rev(char *s)
{
	int z = 0;
	int o;

	while (*s != '\0')
	{
		z++;
		s++;
	}
	s--;
	for (o = z; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
