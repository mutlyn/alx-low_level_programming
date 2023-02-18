#include <stdlib.h> // Include standard library for functions such as srand() and rand()
#include <time.h> // Include time library for time-related functions
#include <stdio.h> // Include standard input/output library for printf() function

/* Function to get the last digit of a number */
int getLastDigit(int num) // A function that receives a number and returns its last digit
{
return (abs(num) % 10); // Return the absolute value of the number modulo 10 (i.e., the remainder when the number is divided by 10)
}

/* betty style doc for function main goes there */
int main(void) // Main function
{
int n; // Declare an integer variable n

srand(time(0)); // Seed the random number generator with the current time
n = rand() - RAND_MAX / 2; // Generate a random number and assign it to n

printf("Last digit of %d is %d ", n, getLastDigit(n)); // Print the message and the value of n and its last digit

if (getLastDigit(n) > 5) // Check if the last digit of n is greater than 5
{
printf("and is greater than 5\n"); // If true, print this message
}
else if (getLastDigit(n) == 0) // Check if the last digit of n is 0
{
printf("and is 0\n"); // If true, print this message
}
else // If the last digit of n is less than 6 and not 0
{
printf("and is less than 6 and not 0\n"); // Print this message
}

return (0); // Exit the program
}
