#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width ipt
* @height: height ipt
* Return: pointer to 2 dim. arr
*/
int **alloc_grid(int width, int height)
{
	int **up;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	up = malloc(sizeof(int *) * height);

	if (up == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		up[x] = malloc(sizeof(int) * width);

		if (up[x] == NULL)
		{
			for (; x >= 0; x--)
				free(up[x]);

			free(up);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			up[x][y] = 0;
	}

	return (up);
}
