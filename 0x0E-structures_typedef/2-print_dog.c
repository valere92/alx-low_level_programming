#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_dog - print the structure dog
  *@d : pointer to structure dog
  *
  *Return: void
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (name == NULL)
			(*d).name = "nil";
		if (age == NULL)
			(*d).age = "nil";
		if (owner  NULL)
			(*d).owner = "nil";
		if (d == NULL)
			printf("\n");
		printf("my_dog_name = %s\n", (*d).name);
		printf("my_dog_age = %1f\n", (*d).age);
		printf("my_dog_owner = %s\n", (*d).owner);
	}
}

