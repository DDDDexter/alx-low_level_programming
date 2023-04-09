#include "main.h"
/**
* _memset - fill memo blc = val
* @s: addr > fill
* @b: val
* @n: bytes > >>
* Return: > new bytes val
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
