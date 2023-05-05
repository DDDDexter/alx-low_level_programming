#include "main.h"

/**
* print_binary - prompts the 2|2 equivalent of a decimal num
* @n: num to pompt in 2|2
*/
void print_binary(unsigned long int n)
{
	int x, compt = 0;
	unsigned long int actu;

	for (x = 63; x >= 0; x--)
	{
		actu = n >> x;

		if (actu & 1)
		{
			_putchar('1');
			compt++;
		}
		else if (compt)
			_putchar('0');
	}
	if (!compt)
		_putchar('0');
}
