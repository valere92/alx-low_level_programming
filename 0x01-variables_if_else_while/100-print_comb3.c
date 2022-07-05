#include <stdio.h>
/**
  *main - enter point
  *Return: 0 as success
  */

int main(void)
{
	int i;
	int j;
	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 57; j++)

		{
			if (i != 57 && j != 5)
			{
				putchar(i);
				putchar(j+1);
			}
			
				putchar(44);
				putchar(32);
			
		}
		
	}

	return (0);
}

