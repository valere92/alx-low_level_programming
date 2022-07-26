#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - create a 2D array
  *@width : the number of columns
  *@height : the number of lines
  *
  *Return: a pointer to the 2D array
  */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(p[k]);
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
