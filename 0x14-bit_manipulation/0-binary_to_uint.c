#include "main.h"

/**
* binary_to_uint - conv 2|2 num to unsigned int
* @b: str containing the 2|2 num
* Return: conve num
*/
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int valeur = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		valeur = 2 * valeur + (b[x] - '0');
	}

	return (valeur);
}
