#include "main.h"
/**
 * _islower - check lowercases
 * Return: 1 if is ower and 0 if is other
 *@c : the decimal number of char
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);

return (0);
}
