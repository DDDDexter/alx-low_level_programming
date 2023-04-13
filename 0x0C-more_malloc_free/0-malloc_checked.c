#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - alloc memo > malloc
* @b: num of bytes to alloc
* Return: a ptr to the alloc memo
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
