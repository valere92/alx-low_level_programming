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

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	else 
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}
	return (0);
}

/**
 * _atoi - Convert a number in a string to an integer
 *
 * @s: String to be converted
 *
 * Return: Integer converted OR (0) if none
 */

int _atoi(char *s)
{
	int sign_cache = 1;
	int result = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign_cache *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			result = (result * 10) + (s[0] - '0');
		else if (result)
			break;

		s++;
	}

	return (result * sign_cache);
}
