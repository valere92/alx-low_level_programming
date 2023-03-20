#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero as success
 */

int main(void)
{

	int ch = 48;

	while (ch <= 57)
	{
		putchar (ch);

		if (ch != 57)
		{

			putchar (44);
			putchar (32);
		}

		ch++;
	}

	putchar ('\n');

	return (0);
}
