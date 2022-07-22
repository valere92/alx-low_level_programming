#include "main.h"
#include <stdio.h>

/**
  *main - enter point, print the program name.
  *@argc : the nomber of arguments
  *@argv : a pointer array that point from another pointer array that
  *point to arguments strings
  *
  *Return: zero as success
  */

int main(int argc _attribute_((unused))_, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
