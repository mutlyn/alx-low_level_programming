#include <stdlib.h>
#include <time.h>

/* Function to get the last digit of a number */
int getLastDigit(int num) {
    return (abs(num) % 10);
}

/* betty style doc for function main goes there */
int main(void)
{
int n;
int last_digit;

/*another else*/
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);

if (last_digit > 5) {
printf("%d and is greater than 5\n", last_digit);
} else if (last_digit == 0) {
/*another else*/
printf("%d and is 0\n", last_digit);
/*another else*/
} else {
/*another else*/
printf("%d and is less than 6 and not 0\n", last_digit);
/*another else*/
}
return (0);
}
