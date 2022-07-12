#include <stdio.h>
#include "main.h"

/**
  *print_array - print values of an array of integer
  *@a : the array pointer
  *@n : number of integers
  *
  *Return: nothing
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
