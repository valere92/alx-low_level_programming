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
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * (strlen(str) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		p[i] = str[i];

	p[strlen(str)] = '\0';

	return (p);
}
