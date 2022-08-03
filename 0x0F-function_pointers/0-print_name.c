#include "function_pointers.h"
#include <stdio.h>

/**
  *f - a function that print nanme
  *@name : the name to print
  *
  *Return: void
  */

void f(char *name)
{
	int l = 0;
	int i, j = 0;

	while (name[j] != '\0')
		l++;

	for (i = 0; i < l; i++)
		_putchar(name[i]);

}

/**
  *print_name - function that print name
  *@name : the name to print
  *@f : the pointerto f
  *
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{

	(*f)(name);

}


