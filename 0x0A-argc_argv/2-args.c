#include <stdio.h>
#include "main.h"

/**
* main - prompt * arg <<
* @argc: numb of arg
* @argv: arr of arg
* Return: Al 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
