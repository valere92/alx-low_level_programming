#include "main.h"

/**
  *swap_int - swap the value of two ints
  *@a : pointer for int a
  @b : pointer for int b
  *
  *Return: no value
  */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;

	return;
}
