#include "main.h"
#include <stdlib.h>

/**
  *create_array - create a array
  *@size : the size of buffer
  *@c : the array to create
  *
  *Return: NULL if size is zero , else a pointer
  */

char *create_array(unsigned int size, char c)
{
	char *p;
	p = &c;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	return (p);
}
