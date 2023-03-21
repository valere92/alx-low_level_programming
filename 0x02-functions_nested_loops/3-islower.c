#include <stdio.h>
#include "main.h"

/**
 * int _islower - check for a lower case character
 * @c: the character to check
 *
 * Return: 1 if c is lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
