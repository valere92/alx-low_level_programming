#include "main.h"
#include <stdio.h>

/**
  *main - inter point, print arguments number
  *@argc : number of arguments
  *@argv : pointer to pointer to array of arguments
  *
  *Return: 0 as success
  */


int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
