#include <stdlib.h>
#include "main.h"

/**
* *_memset - fills memo with a constant byte
* @s: memo area to be filled
* @b: char to cp
* @n: num of times to cp b
* Return: ptr to the memo area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
* *_calloc - alloc memo for an arr
* @nmemb: num of elements in the arr
* @size: size of each element
* Return: potr to alloc memo
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
