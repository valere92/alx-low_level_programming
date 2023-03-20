#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{

	int ch = 'z';

	while (ch >= 'a')
	{

		putchar (ch);
		ch--;
	}

	putchar ('\n');

	return (0);
}
