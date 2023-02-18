#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Function to get the last digit of a number */
int getLastDigit(int num)
{
return (abs(num) % 10);
}

/* betty style doc for function main goes there */
int main(void)
{
int n;

/* Generate a random number between -2147483647 and 2147483647 */
srand(time(0));
n = rand() - RAND_MAX / 2;

/* Print the number and its last digit */
printf("Last digit of %d is %d ", n, getLastDigit(n));

/* Determine whether the last digit is greater than 5, less than 6 and not 0, or 0 */
if (getLastDigit(n) > 5)
{
/* If the last digit is greater than 5, print a message indicating this */
printf("and is greater than 5\n");
}
else if (getLastDigit(n) == 0)
{
/* If the last digit is 0, print a message indicating this */
printf("and is 0\n");
}
else
{
/* If the last digit is less than 6 and not 0, print a message indicating this */
printf("and is less than 6 and not 0, -%d\n", getLastDigit(n));
}

return (0);
}

