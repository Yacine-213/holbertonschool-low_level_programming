#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0') /* Iterate until the null terminator */
	{
		if (i % 2 == 0)    /* Check if the index is even */
			_putchar(str[i]); /* Print the character at the even index */
		i++;
	}
	_putchar('\n'); /* Print a newline character at the end */
}
