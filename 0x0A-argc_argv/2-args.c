#include "main.h"
#include <stdio.h>

/**
  *main - inter point
  *@argc : number of arguments
  *argv : a pointer
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
