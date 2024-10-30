#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 *
 * Description: This function prints every other character of the string,
 * starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
	int i;

	/* Loop through the string and print every second character */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);  /* Print the current character */
	}
	_putchar('\n');  /* Print a new line at the end */
}
