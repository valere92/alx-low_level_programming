#include "main.h"

/**
 * _isdigit - check for a digit through 0 and 9
 * @c: the character to check
 *
 * Return: 1 if is upper , 0 otherwise
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
