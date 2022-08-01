#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - create a new type of data dog
  *@name : the dog name
  *@age : the age of dog
  *@owner : the dog proprior
  *
  *Description: define a dog identifiers
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
