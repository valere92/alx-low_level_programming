#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, som, l;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		l = atoi(argv[i]);
		if (l > 1)
		{
			som += l;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", som);
	return (0);
}
