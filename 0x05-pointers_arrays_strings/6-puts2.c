#include "main.h"

/**
  *puts2 - print a string on stdout
  *@str : the sting to print
  *
  *Return: nothing
  */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
		_putchar('\n');
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

