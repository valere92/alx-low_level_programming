#include "main.h"

/**
  *_memset - fill memory with a constant byte
  *@s : the adress that memory is fill with a constant byte
  *@b : the constant byte that is fill
  *@n : the max numbers of bytes that are fills
  *
  *Return: the adress s
  */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
