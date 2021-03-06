#include "main.h"
#include <stdlib.h>

/**
  *array_range - create an array of integers
  *@min : the minimum value of array
  *@max : the max value of array
  *
  *Return: a pointer to the new array
  */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int j = 0;


	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		p[j] = i;

	return (p);
}
