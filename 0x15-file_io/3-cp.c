#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int avi);
char *create_buffer(char *file);

/**
* create_buffer - Alloc 1024 bytes for buff
* @file: nm of the file buff is storing chars for.
* Return: ptr to the newly-allocated buff
*/
char *create_buffer(char *file)
{
	char *src;

	src = malloc(sizeof(char) * 1024);

	if (src == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (src);
}

/**
* close_file - Close file descrip
* @avi:file descrip to be closed.
*/
void close_file(int avi)
{
	int y;

	y = close(avi);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", avi);
		exit(100);
	}
}

/**
* main - Cp conten of a file to another file.
* @argc: nmb of args supplied to the pgm
* @argv: ar of ptrs to the ags
* Return: 0 on success.
* Description: If the arg count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int depui, a, r, w;
	char *src;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = create_buffer(argv[2]);
	depui = open(argv[1], O_RDONLY);
	r = read(depui, src, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (depui == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(src);
			exit(98);
		}

		w = write(a, src, r);
		if (a == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(src);
			exit(99);
		}

		r = read(depui, src, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(src);
	close_file(depui);
	close_file(a);

	return (0);
}
