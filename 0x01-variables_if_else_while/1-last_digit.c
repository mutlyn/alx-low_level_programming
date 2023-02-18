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

/*another else*/
srand(time(0));
n = rand() - RAND_MAX / 2;

/*another else*/
printf("Last digit of %d is %d ", n, getLastDigit(n));

/*another else*/
if (getLastDigit(n) > 5) {
printf("and is greater than 5\n");
/*another else*/
} else if (getLastDigit(n) == 0) {
printf("and is 0\n");
/*another else*/
} else {
printf("and is less than 6 and not 0\n");
/*another else*/
}

return (0);
}
