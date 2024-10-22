#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number, checks if it's positive, 
 * zero, or negative, and prints the corresponding message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));  /* Initialiser le générateur de nombres aléatoires */
	n = rand() - RAND_MAX / 2;  /* Assigner une valeur aléatoire à n */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

