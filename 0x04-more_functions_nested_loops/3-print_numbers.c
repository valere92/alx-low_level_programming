#include "main.h"

/**
 * print_numbers - print digit from 0 to 9
 *
 * Return: no return value
 */

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar('\n');
}
