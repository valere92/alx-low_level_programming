#include <stdio.h>

void print_putchar(void)
{

	putchar(95);
	putchar(112);
	putchar(117);
	putchar(116);
	putchar(99);
	putchar(104);
	putchar(97);
	putchar(114);
        putchar(10);

}

void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
putchar(i);
putchar(10);
}

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
