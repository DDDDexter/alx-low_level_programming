#include "main.h"
/**
* _strncat - conca 2 str
* using at most n bytes from src
* @dest: ipt val
* @src: ipt val
* @n: ipt val
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
