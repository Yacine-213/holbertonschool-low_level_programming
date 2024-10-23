#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all the numbers of base 16 in lowercase,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through digits 0-9 (ASCII '0' to '9') */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);  /* Print digit */
	}

	/* Loop through letters a-f (ASCII 'a' to 'f') */
	for (i = 97; i <= 102; i++)
	{
		putchar(i);  /* Print letter */
	}

	putchar('\n');  /* Print a newline at the end */

	return (0);  /* Return 0 to indicate successful execution */
}
