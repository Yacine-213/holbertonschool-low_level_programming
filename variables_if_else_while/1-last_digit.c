#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and
 * prints the last digit with specific conditions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* Generate a random number */

	int last_digit = n % 10; /* Get the last digit of n */

	/* Print the last digit with the specified conditions */
	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0); /* Return success */
}
