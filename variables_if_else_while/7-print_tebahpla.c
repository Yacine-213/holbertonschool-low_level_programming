#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase alphabet in reverse order,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through the alphabet in reverse (from 'z' to 'a') */
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);  /* Print each letter */
	}

	putchar('\n');  /* Print a newline at the end */

	return (0);  /* Return 0 to indicate successful execution */
}
