#include "main.h"

/**
 * print_sign - check if an integer are positive or negative
 * @n : an integer
 * Return: 1 if is positive, 0 IF IS ZERO, -1 if is negetive
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
