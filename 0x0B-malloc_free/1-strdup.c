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
	str = malloc(sizeof(char) * strlen(str));
	
	if (str == NULL)
		return (NULL);

	return (str);
}
