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

	if (s[j] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[j]);

	j++;

	_puts_recursion(&s[j]);

}

