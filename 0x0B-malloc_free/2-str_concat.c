#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned long int i, j; 
	int l;


	l = strlen(s1) + strlen(s2);

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i <= strlen(s1); i++)

		s[i] = s1[i];

	for (j = 0; j <= strlen(s2); j++, i++)
	{
		s[i] = s2[j];
		
	}

	s[l + 1] = '\0';

	return (s);
}
