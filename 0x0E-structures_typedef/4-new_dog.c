#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned long int i, j;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	(*new_dog).name = malloc(sizeof(strlen(name) + 1));

	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).owner = malloc(sizeof(strlen(owner) + 1));

	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < strlen(name); i++)
		new_dog->name[i] = name[i];

	(*new_dog).age = age;

	for (j = 0; j < strlen(owner); j++)
		new_dog->owner[j] = owner[j];
	
	(*new_dog).name[i] = '\0';
	(*new_dog).owner[j] = '\0';

	return (new_dog);
}
