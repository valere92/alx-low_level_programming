#include "dog.h"
#include <stdio.h>

/**
  *new_dog - create a new dog
  *@name : the name
  *@age : age
  *@owner : proprior
  *
  *Return: a pointer to new_dog struct
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;

	return (new_dog);
}
