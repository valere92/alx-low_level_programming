#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  *main - enter point, print the program name.
  *@argc : the nomber of arguments
  *@argv : a pointer array that point from another pointer array that
  *point to arguments strings
  *
  *Return: zero as success
  */

int main(int argc, char *argv[])
{
	int i = 1;
	int som = 0;
	int l;
	unsigned long int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		l = atoi(argv[i]);
		som += l;

		for (j = 0; j < strlen(argv[i]); j++)
		{

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		i++;
	}
	printf("%d\n", som);
	return (0);
}
