#include "main.h"

/**
  *_strlen_recursion - return the length of a string
  *@s : the pointer to the string
  *
  *Return: an int
  */

int _strlen_recursion(char *s)
{
	int i = 0;
	
	
	if (s[i] == '\0')
		return (i);
	
	_strlen_recursion(&[i + 1]);
}
