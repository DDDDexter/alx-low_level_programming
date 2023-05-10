#include "main.h"

/**
* create_file - Cat a file.
* @filename: ptr to the name of the file to cate.
* @text_content: ptr to a str to wr to the file.
* Return: If the func fails - -1.
*         Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
	int avi, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	avi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(avi, text_content, len);

	if (avi == -1 || y == -1)
		return (-1);

	close(avi);

	return (1);
}
