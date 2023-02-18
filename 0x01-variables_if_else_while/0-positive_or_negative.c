#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and prints whether it is positive,
 *        negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
/**
 * Prints a Positive Number
 */
{
printf("%d is positive\n", n);
}
else if (n == 0)
/**
 * Prints a Positive Number
 */
{
printf("%d is zero\n", n);
}
else
/**
 * Prints a Positive Number
 */
{
printf("%d is negative\n", n);
}

return (0);
}
