#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{

	int ch = 'a';
	int ch2 = 'A';

	while (ch <= 'z')
	{

		putchar (ch);
		ch++;
	}

	while (ch2 <= 'Z')
	{

		putchar (ch2);
		ch2++;
	}



	putchar ('\n');

	return (0);
}
