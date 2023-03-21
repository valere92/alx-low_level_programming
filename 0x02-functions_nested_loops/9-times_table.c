#include <stdio.h>
#include "main.h"


/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: no return value
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", i * j);

		}

		printf("\n");

	}
}
