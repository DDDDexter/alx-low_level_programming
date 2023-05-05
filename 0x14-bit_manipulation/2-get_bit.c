#include "main.h"

/**
* get_bit - ret the val of a bit at an i in a decimal num
* @n: num search
* @index: i of the bit
* Return: val of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int valeur;

	if (index > 63)
		return (-1);

	valeur = (n >> index) & 1;

	return (valeur);
}
