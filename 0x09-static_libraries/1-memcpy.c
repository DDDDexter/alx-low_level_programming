#include "main.h"
/**
*_memcpy - func cp memo
*@dest: memo > is stored
*@src: memo > cp
*@n: bytes num
*Return: cp memo with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
