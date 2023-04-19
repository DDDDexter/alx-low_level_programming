#include <stdio.h>
#include <stdlib.h>

/**
* main - prompt its own opcodes
* @argc: num of args
* @argv: arr of args
* Return: Al 0 (Success)
*/
int main(int argc, char *argv[])
{
	int bytes, z;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (z = 0; z < bytes; z++)
	{
		if (z == bytes - 1)
		{
			printf("%02hhx\n", arr[z]);
			break;
		}
		printf("%02hhx ", arr[z]);
	}
	return (0);
}
