#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 *
 * Return: no return value
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	}

	_putchar('\n');

}
