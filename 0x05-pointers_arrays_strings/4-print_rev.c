#include "main.h"

/**
 * print_rev - print a string reverse
 * @s: the string to print
 *
 * Return: no return value
 */



void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}

/**
 * _strlen - find the length of a string
 * @s: the string
 *
 * Return: the length of the sting
 */


int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
