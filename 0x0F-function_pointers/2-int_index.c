#include "function_pointers.h"
#include <stdio.h>

/**
  *int_index - search for an integer
  *@array : array of integers
  *@size : the size of array
  *@cmp : pointer to comparaison function
  *
  *Return: the index of first integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, l;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
		
			if((*cmp)(array[i]) != 0)
			{
			
				l = i;
				break;
			}	
		
		}
		if ( l == size)
			return (-1);


	}

	return (l);
}
