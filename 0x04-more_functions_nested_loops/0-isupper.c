#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the character to check
 *
 * Return: 1 if is upper , 0 otherwise
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
