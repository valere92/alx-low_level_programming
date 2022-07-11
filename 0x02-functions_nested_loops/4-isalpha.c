#include "main.h"


/**
 * _isalpha - chech alphabetic caracters
 * @c : the decimal number of the char
 * Return: 1 if is alphabetic 0 if other
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);

return (0);
}
