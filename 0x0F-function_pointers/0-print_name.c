#include "function_pointers.h"
#include <stdio.h>

/**
  *print_name - function that print a name
  *@name : the name to print
  *@f : the pointerto f
  *
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);

}


