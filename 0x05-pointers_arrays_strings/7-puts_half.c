#include "main.h"

/**
  *puts_half - print a string on stdout
  *@str : the sting to print
  *
  *Return: nothing
  */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; i < _strlen(str); i++)
	{
		n = (_strlen(str) - 1) / 2;
		if (i > n)
			_putchar(str[i]);
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

