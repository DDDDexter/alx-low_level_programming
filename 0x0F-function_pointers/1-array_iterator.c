#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prompt each arr elem on a newl
* @array: arr
* @size: how many elem to prompt
* @action: ptr to prompt in regular or hex
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array == NULL || action == NULL)
		return;

	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}
