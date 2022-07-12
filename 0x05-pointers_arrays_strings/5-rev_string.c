#include "main.h"

/**
  *rev_string - print a string on stdout
  *@s : the sting to print
  *
  *Return: nothing
  */

void rev_string(char *s)
{
	int i, n;

	for (i = 0; i < _strlen(s); i++)
	{
		n =  _strlen(s) - i;
		s[i] = s[n];
	}
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

