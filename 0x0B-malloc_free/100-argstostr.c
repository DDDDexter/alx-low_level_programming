#include "main.h"
#include <stdlib.h>
/**
* argstostr - main ent
* @ac: int ipt
* @av: doub ptr arr
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (x = 0; av[i][n]; x++)
	{
		str[y] = av[i][x];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
