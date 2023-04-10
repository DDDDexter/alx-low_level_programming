#include <stdio.h>
#include "main.h"

/**
* main - prompt arg num > to pgm
* @argc: num of arg
* @argv: arr of arg
* Return: Al 0 (Success)
*/

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
