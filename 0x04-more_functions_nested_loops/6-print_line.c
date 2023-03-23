#include "main.h"

/**
 * print_line - print n time the character '_'
 * @n: how times the character should be print
 *
 *Return: no return value
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
