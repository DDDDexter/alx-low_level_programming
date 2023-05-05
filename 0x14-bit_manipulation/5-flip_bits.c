#include "main.h"

/**
* flip_bits - counts num of bits to change
* to get from one num to another
* @n: first num
* @m: second num
* Return: num of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, compte = 0;
	unsigned long int actu;
	unsigned long int fard = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		actu = fard >> x;
		if (actu & 1)
			compte++;
	}

	return (compte);
}
