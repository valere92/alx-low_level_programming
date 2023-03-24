#include "main.h"

/**
 * print_diagonal - print n time the character '\'
 * @n: how many times the character should be printed
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < (i - 1); j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
