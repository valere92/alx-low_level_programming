#include "main.h"

/**
  *_memcpy - function copies n bytes from memory area src to memory area dest
  *@dest : adress of destinated char
  *@src : adress of source char
  *@n : number of bytes that ara copied
  *
  *Return: adress of destination char
  */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;


	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	return (dest);
}

