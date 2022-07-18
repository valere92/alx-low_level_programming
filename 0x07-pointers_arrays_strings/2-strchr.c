#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s : the string where the character is find
 *@c : the character that is find
 *
 *Return: the adress to the character
 */


char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			j++;
			break;
		}
	}
	if (j == 0)
		return ('\0');

	return (&s[j - 1]);
}
