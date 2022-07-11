#include "main.h"
/**
 * print_alphabet_x10 -  print alphabet in lowercase on 10 lines
 * Return: void as success
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 97; i <= 122; i++)
putchar(i);
putchar(10);
}
}
