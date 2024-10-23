#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all single-digit numbers of base 10 starting from 0,
 * followed by a newline. It does not use any char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through ASCII values of '0' to '9' (48 to 57) */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);  /* Print the digit as a character */
	}

	putchar('\n');  /* Print a newline after all digits */

	return (0);  /* Return 0 to indicate successful execution */
}
