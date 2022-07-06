#include <unistd.h>
/**
 * _putchar.c file
 */

int _putchar(char c)
{

	return( write(1, &c, 1));

}
