#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{

	int ch = 'a';

	while (ch <= 'z')
	{

		if (ch != 'q' && ch != 'e')
		{

			putchar (ch);
		}

		ch++;
	}

	putchar ('\n');

	return (0);
}
