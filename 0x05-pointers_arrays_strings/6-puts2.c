#include "main.h"

/**
 *puts2 - prints every other character of a string
 *@str : the string to print
 *Return : nothing
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n < _strlen(str); n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
#include "main.h"

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
