#include "main.h"

/**
  *_puts_recursion - prints a string, followed by a new line.
  *@s : the string to print
  *
  *Return ; nothing
  */


void _puts_recursion(char *s)
{
	int j = 0;
	int n =

	if (s[j] != '\0')
	{
		_putchar(s[j]);
		j++;
	}
	else
		_putchar('\n');

	_puts_recursion(s);

}

