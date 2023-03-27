#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: no return value
 */



void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
