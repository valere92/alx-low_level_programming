#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - display the last digit of a numner to screen
 * @number: the number
 *
 * Return: the last digit of number
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
