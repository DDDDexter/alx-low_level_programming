#include "main.h"
/**
* _memset - fill a block of memory with a specific value
* @s: star addr of memo to be fill
* @b: the desired value
* @n: num of bytes to be changed
* Return: chan arr with new val for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
