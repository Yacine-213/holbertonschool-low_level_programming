#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase alphabet followed by the uppercase
 * alphabet, each followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	/* Print lowercase alphabet */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* Print uppercase alphabet */
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	/* Print newline */
	putchar('\n');

	return (0);
}
