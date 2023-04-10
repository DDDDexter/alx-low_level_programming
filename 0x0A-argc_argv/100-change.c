#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prompts minimum num of coins to
* make change for an amount of money
* @argc: number of args
* @argv: array of args
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int num, z, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (z = 0; z < 5 && num >= 0; z++)
	{
		while (num >= coins[z])
		{
			res++;
			num -= coins[z];
		}
	}

	printf("%d\n", res);
	return (0);
}
