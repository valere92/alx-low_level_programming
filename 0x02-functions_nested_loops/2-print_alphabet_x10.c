#include "main.h"
/**
 * main - inter point, print alphabet in lowercase
 * Return: 0 as success
 */
int main(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
putchar(i);
putchar(10);
}
return (0);
}
