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
