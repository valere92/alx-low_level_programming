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
if (i != 57)
{
putchar(i);
putchar(44);
putchar(32);
}
else
{
putchar(i);
}
}
putchar(10);
return (0);
}
