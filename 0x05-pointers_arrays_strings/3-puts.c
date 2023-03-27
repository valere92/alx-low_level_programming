#include "main.h"

/**
 * _puts - print a string to the stdout
 * @str: the string to print
 *
 * Return: no return value
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
