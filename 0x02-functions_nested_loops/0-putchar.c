#include <stdio.h>
#include "main.h"


/**
 * print_putchar - print "_putchar" at the screen
 *
 * Return: zero as success
 */

int print_putchar(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);

}

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{
	print_putchar();

	return (0);
}
