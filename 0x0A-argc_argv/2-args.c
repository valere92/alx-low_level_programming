#include "main.h"
#include <stdio.h>

/**
  *main - enter point
  *@argc : number of arguments
  *@argv : pointer to a pointer
  *
  *Return: zero as success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
