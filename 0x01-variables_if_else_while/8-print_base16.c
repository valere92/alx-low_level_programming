#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{

	int ch = '0';
	int ch2 = 'a';

	while (ch <= '9')
	{

		putchar (ch);
		ch++;
	}

	while (ch2 <= 'f')
	{

		putchar (ch2);
		ch2++;
	}



	putchar ('\n');

	return (0);
}
