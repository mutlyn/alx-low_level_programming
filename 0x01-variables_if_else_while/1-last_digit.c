#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Function to get the last digit of a number */
int getLastDigit(int num) {
return (abs(num) % 10);
}

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is ", n);
/*another else*/

if (n > 5) {
printf("%d and is greater than 5\n", n);
/*another else*/
} else if (n == 0) {
/*another else*/
printf("%d and is 0\n", n);
} else {
/*another else*/
printf("%d and is less than 6 and not 0\n", n);
/*another else*/
}
return (0);
}
