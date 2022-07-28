#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocate memory for an array using malloc
  *@nmemb : the number of elements of array
  *@size : the size of one element of array
  *
  *Return: a pointer to alocate space
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;


	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for(i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
