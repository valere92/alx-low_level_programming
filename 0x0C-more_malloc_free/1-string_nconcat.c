#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat - concatenate two strings
  *@s1 : the first string
  *@s2 : the second string
  *@n : amount of byte to concatenate on s2
  *
  *Return: a pointer to the newly alocated space
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *s;
	int l, j;
	unsigned long int i;


	l = strlen(s1) + n;

	s = malloc(l + 1);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
		s[i] = *(s1 + i);

	for (j = 0; j < n; j++; i++)
		s[i + 1] = *(s2 + j);

	s[l + 1] = '\0';

	return (s);
}

