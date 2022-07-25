#include "main.h"
#include <stdlib.h>

/**
  *create_array - create an array
  *@size : the size of the array
  *@c : the char to print
  *
  *Return: Null if sizez is zero else p
  */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
			p[i] = c;
	return (p);
}
