#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *init_dog - initialize struct_dog
  *@d : a pointer to struct_dog
  *@name : definite dog name
  *@age : fefinite dog age
  *@owner : definite dog owner
  *
  *Return: a void type pointer to struct dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{

		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	
	}

}
