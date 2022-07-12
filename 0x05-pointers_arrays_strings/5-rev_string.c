#include "main.h"

/**
  *rev_string - print a string on stdout
  *@s : the sting to print
  *
  *Return: nothing
  */

void rev_string(char *s)
{
	int i;
	char str[];

	for (i = 0; i < _strlen(s); i++)
	{
		str[i] = s[_strlen(s) - i];
	}
	s = str;
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

