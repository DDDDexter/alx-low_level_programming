#include "main.h"
#include <stdlib.h>
/**
* create_array - create arr of size size and assi char c
* @size: size of arr
* @c: char to assi
* Description: create arr of size size and assi char c
* Return: pointer to arr, NULL if fail
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int h;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		str[h] = c;
	return (str);
}
