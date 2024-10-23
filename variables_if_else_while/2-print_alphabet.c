#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	char letter;

	/* Initialize the letter to 'a' */
	letter = 'a';

	/* Loop through the letters from 'a' to 'z' */
	while (letter <= 'z')
	{
		putchar(letter); /* Print the current letter */
		letter++;        /* Move to the next letter */
	}

	putchar('\n'); /* Print a newline at the end */
	/* Return success */
	return (0);
}
