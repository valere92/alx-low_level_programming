#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - print every minute of a day
  *
  * Return: no return value
  */

void jack_bauer(void)
{
	int i, j, k, l;
	int z = 9;

	for (i = 0; i < 3; i++)
	{
		if (i == 2)
			z = 3;

		for (j = 0; j <= z; j++)
		{

			for (k = 0; k < 6; k++)
			{


				for (l = 0; l <= 9; l++)
				{
					_putchar (i + '0');
					_putchar (j + '0');
					_putchar (':');
					_putchar (k + '0');
					_putchar (l + '0');
					_putchar ('\n');


				}
			}
		}

	}

}
