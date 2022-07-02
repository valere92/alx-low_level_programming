#include <stdio.h>
/**
 * main - inter point
 * Dascription: print alphabet in lower and upper
 * Return: 0 as success
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
putchar(i);
for (i = 65; i < 91; i++)
putchar(i);
putchar(10);
return (0);
}
