#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2) // On itère en ajoutant 2 à i
	{
		_putchar(str[i]); // Imprime le caractère courant
	}
	_putchar('\n'); // Imprime un saut de ligne à la fin
}
