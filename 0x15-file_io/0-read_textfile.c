#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Rd txt file prompt to STDOUT.
* @filename: txt file being rd
* @letters: num of chars to be red
* Return: w- actual num of bytes rd prompted
*        0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *src;
	ssize_t avi;
	ssize_t w;
	ssize_t t;

	avi = open(filename, O_RDONLY);
	if (avi == -1)
		return (0);
	src = malloc(sizeof(char) * letters);
	t = read(avi, src, letters);
	w = write(STDOUT_FILENO, src, t);

	free(src);
	close(avi);
	return (w);
}
