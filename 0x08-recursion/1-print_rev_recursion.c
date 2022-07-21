#include "main.h"

/**
  *_print_rev_recursion - prints a string reverse.
  *@s : the string to print
  *
  *Return ; nothing
  */


void _print_rev_recursion(char *s)
{
	int j = 0;

	if (s[j] == '\0')
		return;

	_puts_recursion(&s[j + 1]);

	_putchar(s[j]);

	

}

