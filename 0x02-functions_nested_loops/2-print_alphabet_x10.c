#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lower case 10 time
 *
 * Return: no return value
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n <= 9; n++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}

		_putchar('\n');

	}

}
