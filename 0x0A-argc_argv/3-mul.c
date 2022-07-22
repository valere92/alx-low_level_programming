#include "main.h"
#include <stdio.h>

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
	int mul;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = argv[0] * argv[1];
		printf("%d\n", mul);
	}
	return (0);
}
