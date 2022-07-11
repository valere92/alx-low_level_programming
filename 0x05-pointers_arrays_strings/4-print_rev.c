#include "main.h"

/**
  *print_rev - print a string on stdout
  *@s : the sting to print
  *
  *Return: nothing
  */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


/**
  *_strlen - return the length of a string
  *@s : the string parameter
  *
  *Return: size of a string which is the length of string
  */


int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

