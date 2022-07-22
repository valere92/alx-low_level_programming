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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	else 
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
