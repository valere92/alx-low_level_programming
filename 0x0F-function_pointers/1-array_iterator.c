#include "function_pointers.h"
#include <stdio.h>

/**
  *array_iterator - print fonctions in array
  *@array : an array of integers
  *@size : the size of array
  *@action : pointer for array of functions pointers
  *
  *Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL || action == NULL) || size == 0)
		return;


	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
