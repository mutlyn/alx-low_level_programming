#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and prints whether it is positive,
 *        negative, or zero.
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
/*Prints a Positive Number*/
{
printf("%d is positive\n", n);
/*Prints a Positive Number*/
}
else if (n == 0)
/*else statement*/
{
printf("%d is zero\n", n);
/*Prints a zero*/
}
else
/*another else*/
{
printf("%d is negative\n", n);
/*prints a negative*/
}

return (0);
}
