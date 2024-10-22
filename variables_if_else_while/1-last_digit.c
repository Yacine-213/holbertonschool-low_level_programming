#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n, 
 * extracts its last digit, and prints messages based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int last_digit;

        srand(time(0));  /* Seed the random number generator */
        n = rand() - RAND_MAX / 2;  /* Assign a random number to n */

        last_digit = n % 10;  /* Get the last digit */

        /* Print the last digit and the appropriate message */
        printf("Last digit of %d is %d and ", n, last_digit);

        if (last_digit > 5)
                printf("is greater than 5\n");
        else if (last_digit == 0)
                printf("is 0\n");
        else
                printf("is less than 6 and not 0\n");

        return (0);
}	
