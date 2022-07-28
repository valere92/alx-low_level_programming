#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	char *s;
	int l;
	unsigned long int i;
	unsigned int j;

	l = strlen(s1) + n;

	s = malloc(l + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
		s[i] = *(s1 + i);

	for (j = 0; j < n; j++, i++)
		s[i] = *(s2 + j);

	s[i] = '\0';

	return (s);
}
