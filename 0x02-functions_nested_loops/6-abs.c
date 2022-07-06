#include "main.h"

/**
 * _abs - compute the asolute value of an integer
 * @n : the integer in parameter
 * Return: absolute
 */


int _abs(int n)
{
int absolute;

if (n <= 0)
absolute = -1 * n;
else
absolute = n;

return (absolute);
}
