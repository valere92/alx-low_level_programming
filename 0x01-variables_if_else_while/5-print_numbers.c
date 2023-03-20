#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{

	int ch = '0';

	while (ch <= '9')
	{

		putchar (ch);
		ch++;
	}

	putchar ('\n');

	return (0);
}
