#include "main.h"

/**
* char *_strcpy - func cp str pnt >  src
* @dest: cp to
* @src: cp from
* Return: str
*/
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; z < y ; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
