#include "main.h"


/**
* print_alphabet_x10 - prompt 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	char x;
	int z;


	z = 0;


	while (z < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		z++;
	}
}

	
