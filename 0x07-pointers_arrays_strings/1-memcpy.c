#include "main.h"
/**
*_memcpy - a func that cp memo area
*@dest: memo where is stor
*@src: memo where is cp
*@n: num of bytes
*Return: cpd memo with n bytes chnd
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
