#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - return a copy of string
  *@str : the string to copy
  *
  *Return: a pointer
  */

char *_strdup(char *str)
{
	char *p;
	long unsigned int i;

	p = malloc(sizeof(char) * strlen(str));

	for (i = 0; i < strlen(str); i++)
		p[i] = str[i];
	if (p == NULL)
		return (NULL);

	return (p);
}
