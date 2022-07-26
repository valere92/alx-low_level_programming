#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned long int i; 
	int j, l, k;

	k = 0;
	l = strlen(s1) + strlen(s2);

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i <= strlen(s1); i++)

		s[i] = s1[i];

	for (j = i + 1; j <= l; j++)
	{
		s[j] = s22[k];
		k++;
	}

	s[l + 1] = '\0';

	return (s);
}
