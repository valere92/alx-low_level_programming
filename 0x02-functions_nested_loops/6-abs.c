#include <stdio.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @absolute: the integer to compute
 *
 * Return: the absolute value of the integer
 */

int _abs(int absolute)
{
	if (absolute < 0)
		return (-absolute);
	else
		return (absolute);
}
