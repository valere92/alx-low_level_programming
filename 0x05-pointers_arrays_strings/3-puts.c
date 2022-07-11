#include "main.h"

/**
  *_puts - print a string on stdout
  *@str : the sting to print
  *
  *Return: nothing
  */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
