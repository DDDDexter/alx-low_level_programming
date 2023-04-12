#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - dup > new memo space locat
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *q;
	int i, m = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	q = malloc(sizeof(char) * (i + 1));

	if (q == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		q[m] = str[m];

	return (q);
}
