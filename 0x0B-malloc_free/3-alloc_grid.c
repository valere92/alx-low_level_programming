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
	int *s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(char) * height);
	s = malloc(sizeof(char) * width);

	if (p == NULL || s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			s[j] = 0;
			p[i] = &s[j];
		}

	return (p);
}
