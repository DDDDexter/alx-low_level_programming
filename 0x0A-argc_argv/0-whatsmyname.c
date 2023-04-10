#include <stdio.h>
#include "main.h"

/**
* main - prompt name of pgm
* @argc: num of arg
* @argv: arr of arg
* Return: Al 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
