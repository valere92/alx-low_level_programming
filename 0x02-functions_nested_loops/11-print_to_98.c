#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98.
 *
 * @n: Theinput number.
 *
 * Return: no return.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar(n + '0')
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar(10);
