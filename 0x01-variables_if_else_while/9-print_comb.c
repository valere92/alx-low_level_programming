#include <stdio.h>
/**
 * main - inter point
 * Description: print combination of numbers
 * Return: 0 as success
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
putchar(i+1);
putchar(44);
putchar(32);
}
putchar(10);
return (0);
}
