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
    {
        printf("%d is positive\n", n);
		// This prints out the number if it is positive
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
		// This prints out the number if it is positive
    }
    else
    {
        printf("%d is negative\n", n);
		// This prints out the number if it is positive
    }

    return (0);
}
