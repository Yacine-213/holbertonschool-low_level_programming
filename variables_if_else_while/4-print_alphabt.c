#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet in lowercase,'q' and 'e',
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	/* Loop through lowercase letters 'a' to 'z' */
	for (i = 'a'; i <= 'z'; i++)
	{
		/* Skip 'q' and 'e' */
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	putchar('\n'); /* Print newline at the end */

	return (0);
}
