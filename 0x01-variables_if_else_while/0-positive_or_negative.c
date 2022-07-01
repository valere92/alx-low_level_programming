#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - inter point
 *Description: print a random number and tell if is positive or negative
 *Return: 0 as success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("is positive\n");
if (n == 0)
printf("is zero\n");
if (n < 0)
printf("is negative\n");
return (0);
}
