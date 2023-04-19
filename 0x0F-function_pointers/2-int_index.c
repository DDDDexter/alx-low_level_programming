#include "function_pointers.h"
/**
* int_index - ret indx place if comparison = true, else -1
* @array: arr
* @size: size of elem in arr
* @cmp: ptr to func of one of the 3 in main
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
			return (z);
	}
	return (-1);
}
