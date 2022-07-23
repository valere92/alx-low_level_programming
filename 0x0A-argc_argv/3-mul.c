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
	int a, b, c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;

		printf("%d\n", c);
	}
	else 
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
