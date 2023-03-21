#include <stdio.h>
#include "main.h"

/**
 * print_sign - display the sign of an integer to the screen
 * @n: the integer to check
 *
 * Return: 1 if is positive, 0 if is zero and -1 if is negative
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	_putchar('\n');
}
