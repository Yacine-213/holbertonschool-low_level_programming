#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all single-digit numbers of base 10 starting from 0,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through numbers from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');  /* Print the number as a character */
	}

	putchar('\n');  /* Print a newline after all numbers */

	return (0);  /* Return 0 to indicate successful execution */
}
